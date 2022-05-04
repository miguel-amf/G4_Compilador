#include "globals.h"
#define NO_CODE FALSE

#include "util.h"
#include "scan.h"
#include "parse.h"
#include "analyze.h"
#include "cgen.h"
#include "code.h"

/* allocate global variables */
int lineno = 0;
FILE * source;
FILE * listing;
FILE * code;

/* allocate and set tracing flags */
int EchoSource = TRUE;
int TraceScan = FALSE;
int TraceParse = TRUE;
int TraceAnalyze = TRUE;
int TraceCode = FALSE;

int Error = FALSE;

main( int argc, char * argv[] ) { 
  TreeNode * syntaxTree;
  //armazena o nome do arquivo
  char arq[80];

  //verifica se foi passado um arquivo
  if (argc != 2) { 
      fprintf(stderr,"uso incorreto, favor inserir: %s \"nome_do_arquivo.cm\"\n", argv[0]);
      exit(1);
    }
  
  //copia o nome do arquivo pra uma variavel local
  strcpy(arq,argv[1]) ;

  //abre o arquivo em leitura
  source = fopen(arq,"r");

  //verifica se o arquivo existe
  if (source==NULL) { 
    fprintf(stderr,"arquivo %s não encontrado\n",arq);
    exit(1);
  }
  listing = stdout;
  fprintf(listing,"\ncompilando %s\n",arq);

//chama o analisador lexico
 syntaxTree = parse(); 
 if (TraceParse) {
  fprintf(listing,"\nArvore Sintática:\n");
  printTree(syntaxTree);
 }

  //chama o analisador sintatico e semantico
  if (! Error)
  { if (TraceAnalyze) fprintf(listing,"\nContruindo a tabela de símbolos\n"); 
    buildSymtab(syntaxTree); //Sintatico
    if (TraceAnalyze) fprintf(listing,"\nVerificando tipagem\n");
    typeCheck(syntaxTree); // Semtantico
    if (TraceAnalyze) fprintf(listing,"\nfim da verificacao de tipos\n");
  }

  if (! Error)
  { char * codefile;
    int fnlen = strcspn(arq,".");
    codefile = (char *) calloc(fnlen+4, sizeof(char));
    strncpy(codefile,arq,fnlen);
    strcat(codefile,".tm");
    code = fopen(codefile,"w");
    if (code == NULL)
    { printf("Unable to open %s\n",codefile);
      exit(1);
    }
    codeGen(syntaxTree,codefile);
    fclose(code);
  }

  //fecha o arquivo
  fclose(source);
  //retorna a funcao
  return 0;
}

