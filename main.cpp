#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	int testScores[5]{ 100, 95, 99, 87, 88 };
	//accessing array elements
	cout << "First score at index 0: " << testScores[0] << endl;
	cout << "Second score at index 1: " << testScores[1] << endl;
	cout << "Third score at index 2: " << testScores[2] << endl;
	cout << "Fourth score at index 3: " << testScores[3] << endl;
	cout << "Fifth score at index 4: " << testScores[4] << endl;
	//changing the contents of array elements
	testScores[0] = 90;
	cout << "Updated first score at index 0: " << testScores[0] << endl;



	int highScorePerLevel[10] { 3, 5 }; //init to 3,5 and remaining to 0

	const int daysInYear {365};
	double hiTemperatures[daysInYear] { 0 }; // init all to zero

	int anotherArray[] { 1,2,3,4,5 }; // size automatically calculated

	return 0;
}