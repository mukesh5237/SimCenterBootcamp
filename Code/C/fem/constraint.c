#include <stdio.h>
#include "constraint.h"

void constraintPrint(Constraint *theConstraint){
  printf("Node : %d ", theConstraint->tag);
  printf("Csts: %d %d %d \n", theConstraint->ctype[0], theConstraint->ctype[1], theConstraint->ctype[2]);
}

void constraintSetup(Constraint *theConstraint, int tag, int cst1, int cst2, int cst3) {
  theConstraint->tag = tag;
  theConstraint->ctype[0] = cst1;
  theConstraint->ctype[1] = cst2;
	theConstraint->ctype[2] = cst3;
  theConstraint->next = NULL;
}
