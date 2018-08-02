//Includes the header files
#include "node.h"
#include "domain.h"
#include "constraint.h"

int main(int argc, char **argv) {
  Domain theDomain; //variable "theDomain" of type Domain // Strut Domain contains address of Nodes and Constraints
	
	theDomain.theNodes = 0;
  domainAddNode(&theDomain, 1, 0.0, 0.0);
  domainAddNode(&theDomain, 2, 0.0, 2.0);
  domainAddNode(&theDomain, 3, 1.0, 1.0);

	theDomain.theConstraints = 0;
  domainAddConstraint(&theDomain, 1, 0, 0, 1);
  domainAddConstraint(&theDomain, 2, 0, 0, 0);
  domainAddConstraint(&theDomain, 3, 1, 1, 1);
  
  domainPrint(&theDomain);

  // get and print singular node
  printf("\nsingular node:\n");
  Node *theNode = domainGetNode(&theDomain, 2);
  nodePrint(theNode);
}
