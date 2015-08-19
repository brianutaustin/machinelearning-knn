#include <vector>
#include <cmath>
#include <string>

struct DataStructure {
	/* Common variables */
	float    SepalLength;
	float    SepalWidth;
	float    PetalLength;
	float    PetalWidth;
	int      ClassTrueID;

	/* Variable added for Test Data points */
	int      ClasskNNID;
};

class Data {
public:
	Data();
	~Data();

	/* Get methods */
	int                              GetNTrain();
	int                              GetNTest();
	std::vector<DataStructure>       GetTrainPoints();
	std::vector<DataStructure>       GetTestPoints();

	/* Import data */
	void                             ImportData(std::string);

	/* Set methods */
	/* Used only for the Test points to set the ClasskNNID variable */
//	void 										SetTestkNNID(int);

	/* Debugging mode */
	void                             Verbose();

private:
	std::vector<DataStructure>       fTrainPoints;
	std::vector<DataStructure>       fTestPoints;
	int                              fNTrain;
	int                              fNTest;
};
