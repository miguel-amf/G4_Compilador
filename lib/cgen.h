/****************************************************/
/* File: cgen.h                                     */
/* The code generator interface to the TINY compiler*/
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#ifndef _cgen_h_
#define _cgen_h_
#include "arvore.h"

/* Procedure codeGen generates code to a code
 * file by traversal of the syntax tree. The
 * second parameter (codefile) is the file name
 * of the code file, and is used to print the
 * file name as a comment in the code file
 */
// void codeGen(TreeNode * syntaxTree, char * codefile);

void gerarCodigo(AST* syntaxTree, char * codefile);

#endif
