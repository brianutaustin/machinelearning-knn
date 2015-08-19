#include <iostream>
#include <cmath>
#include <string>

#include "Data.h"
//#include "kNNAlgorithm.h"
/* ----------------------------------------------------------------------------------------- */

/*---Main kNN program ---*/
int main() {
	Data* ValidationData = new Data();

	ValidationData->ImportData("./iris.data");
	std::vector<DataStructure>	TrainData = ValidationData->GetTrainPoints();
	std::vector<DataStructure>	TestData  = ValidationData->GetTestPoints();
	int NTest  = ValidationData->GetNTest();
	int NTrain = ValidationData->GetNTrain();

	for (int i = 0; i < NTest; i++) {
		std::cout << "Test point: " << i << "\t";
		std::cout << "True ID: " << TestData.at(i).ClassTrueID << std::endl;
	}

	return 0;
}
