#ifndef _CONSTRAINT
#define _CONSTRAINT

#include <stdio.h>

typedef struct constraint {
  int tag;
  int ctype[3];
  struct constraint *next;
} Constraint;

void constraintPrint(Constraint *);
void constraintSetup(Constraint *, int tag, int cst1, int cst2, int cst3);

#endif
