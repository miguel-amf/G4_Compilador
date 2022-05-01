#ifndef _ANALYZE_H_
#define _ANALYZE_H_

/* A funcao buildSymtab constroi o simbolo
 * tabela por travessia de pre ordem da arvore sintatica
 */
void buildSymtab(TreeNode *);
void typeCheck(TreeNode *);

#endif
