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



	char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
	cout << "\nThe first vowel is: " << vowels[0] << endl;
	cout << "The last vowel is: " << vowels[4] << endl;

	//cin >> vowels[5]; the causes an error because it is out of bounds

	double hiTemps[]{ 90.1, 89.8, 77.5, 81.6 };
	cout << "\nThe first high temperature is: " << hiTemps[0] << endl;

	hiTemps[0] = 100.7; //set the first element in hiTemps to 100.7
	cout << "The first high temperature is now: " << hiTemps[0] << endl;

	int scores[] {100, 90, 80, 70, 60,};

	//accessing array elements with user input
	cout << "\nFirst score at index 0: " << scores[0] << endl;
	cout << "Second score at index 1: " << scores[1] << endl;
	cout << "Third score at index 2: " << scores[2] << endl;
	cout << "Fourth score at index 3: " << scores[3] << endl;
	cout << "Fifth score at index 4: " << scores[4] << endl;
	cout << "\nEnter 5 test scores: ";
	cin >> scores[0];
	cin >> scores[1];
	cin >> scores[2];
	cin >> scores[3];
	cin >> scores[4];
	cout << "\nThe updated array is: " << endl;
	cout << "First score at index 0: " << scores[0] << endl;
	cout << "Second score at index 1: " << scores[1] << endl;
	cout << "Third score at index 2: " << scores[2] << endl;
	cout << "Fourth score at index 3: " << scores[3] << endl;
	cout << "Fifth score at index 4: " << scores[4] << endl;

	cout << "\nNotice what the value of the array name is: " << scores << endl;
	cout << endl;

	return 0;
}