#include <iostream>
#include <cmath>
#include <string>

#include "Data.h"
//#include "kNNAlgorithm.h"
/* ----------------------------------------------------------------------------------------- */

/*---Main kNN program ---*/
int main() {
	Data* ValidationData = new Data();

	ValidationData->ImportData("./iris.dat");
	/* Uncomment the following line in debugging mode */
	ValidationData->Verbose();

	

	return 0;
}
