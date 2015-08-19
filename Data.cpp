#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstring>

#include <iostream>

#include "Data.h"
/* Methods definition */
/*---------------------------------------------------------------------------------*/

Data::Data() {}

Data::~Data() {}

void Data::ImportData(std::string DataFile) {
	std::ifstream FileInStream(DataFile.c_str());
	std::string line;
	if (FileInStream.is_open()) {
		float sepal_length;
		float sepal_width;
		float petal_length;
		float petal_width;
		std::string	flower_name;
		while (std::getline(FileInStream, line)) {
			std::istringstream InStringStream(line);
			InStringStream >> sepal_length >> sepal_width >> petal_length >> petal_width >> flower_name;

			DataStructure DS;
			DS.SepalLength = sepal_length;
			DS.PetalLength = petal_length;
			DS.SepalWidth  = sepal_width;
			DS.PetalWidth  = petal_width;
			DS.ClasskNNID  = 0;
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

int Data::GetNTrain() {
	return fNTrain;
}

int Data::GetNTest() {
	return fNTest;
}

std::vector<DataStructure> Data::GetTrainPoints() {
	return fTrainPoints;
}

std::vector<DataStructure>	Data::GetTestPoints() {
	return fTestPoints;
}

/* Set method for Test point's ClasskNNID */
/* ------------------------------------------------------------------------------- */
//void SetTestkNNID(int kNNID) {}
