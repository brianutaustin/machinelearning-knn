#include <fstream>
#include <sstream>
#include <stdlib>

#include "Data.h"
/* Methods definition */
/*---------------------------------------------------------------------------------*/

Data::Data() {}

Data::~Data() {}

void Data::ImportData(std::string DataFile) {
	std::ifstream FileInStream(DataFile);
	std::string line;
	if (FileInStream.is_open()) {
		float 		sepal_length;
		float 		sepal_width;
		float 		petal_length;
		float 		petal_width;
		std::string	flower_name;
		while (std::getline(FileInStream, line)) {
			std::istringstream InStringStream(line);
			InStringStream >> sepal_length >> sepal_width >> petal_length >> petal_width >> flower_name;

			DataStructure DS;
			DS.SepalLength = SepalLength;
			DS.PetalLength = PetalLength;
			DS.SepalWidth  = SepalWidth;
			DS.PetalWidth  = PetalWidth;
			DS.ClasskNNID	= 0;
			if (flower_name == "Iris-setosa") {
				DS.ClassTrueID = 1;
			} else if (flower_name == "Iris-versicolor") {
				DS.ClassTrueID = 2;
			} else if (flower_name == "Iris-virginica") {
				DS.ClassTrueID = 3;
			}

			/* Import the Test and Training points */
			if ((rand() % 3 + 1) == 3) {
				fNTest++;
				fTestPoints.push_back(DS);
			} else {
				fNTrain++;
				fTrainPoints.push_back(DS);
			}
		}
	}
}

/* Get methods */
/* ------------------------------------------------------------------------------- */

int GetNTrain() {
	return fNTrain;
}

int GetNTest() {
	return fNTest;
}

std::vector<DataStructure> GetTrainPoints(int) {
	return fTrainPoints;
}

std::vector<DataStructure>	GetTestPoints(int) {
	return fTestPoints;
}

/* Set method for Test point's ClasskNNID */
/* ------------------------------------------------------------------------------- */
//void SetTestkNNID(int kNNID) {}
