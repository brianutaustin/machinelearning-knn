#include <cmath>
#include <string>
#include <fstream>

structure DataStructure {
	/* Common variables */
	float 	SepalLength;
	float 	SepalWidth;
	float 	PetalLength;
	float 	PetalWidth;
	int		ClassTrueID;

	/* Variable added for Test Data points */
	int		ClasskNNID;

	/* variable added for kNN Train points */
	float		DistanceToTestPoint;
};

class Data {
public:
	Data();
	Data(std::string);
	~Data();

	/* Get methods */
	int										GetNTrainPoints();
	int										GetNTestPoints();

	std::vector<DataStructure>			GetTrainPoints(int);
	std::vector<DataStructure>			GetTestPoints(int);
private:
	std::vector<DataStructure> 		fTrainData;
	std::vector<DataStructure>			fTestData;
	std::vector<DataStructure>			fNNPointsData;
};
