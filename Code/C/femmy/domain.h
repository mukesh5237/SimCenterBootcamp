#include "node.h"
#include "constraint.h"

typedef struct struct_domain {
  Node *theNodes; //pointer variable "theNodes" of type Node
	Constraint *theConstraints;  //pointer variable "theConstraints" of type Node
} Domain;

void domainPrint(Domain *theDomain);
void domainAddNode(Domain *theDomain, int tag, double crd1, double crd2);
void domainAddConstraint(Domain *theDomain, int tag, int cst1, int cst2, int cst3);
void domainPrintNodes(Domain *theDomain);
void domainPrintConstraints(Domain *theDomain);
Node *domainGetNode(Domain *, int nodeTag);

