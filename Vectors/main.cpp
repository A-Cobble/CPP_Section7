#include <iostream>
#include <vector> // this is required in order to use vectors

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
	/*
		Vectors
		-Container in the C++ standard Template library
		-An array that can grow and shrink in size at execution time
		-Provides similar semantics and syntax as arrays
		-Very efficient
		-Can provide bounds checking
		-Can use lots of cool functions like sort, reverse, find, and more
		-A C++ vector is an object
		-all elements inside a vector have to be the same type
		-stored contiguously in memory
		-individual elements can be accessed by their position or index
	*/

	//How to declare a vector:
	//		vector <char> vowels (5);				uses a constructor syntax which tells the compiler i want 5 characters
	//		vector <int> test_scores(10);			this automatically sets each integer to 0 (which is different from arrays)

	//How to access vector elements:
	//		vector_name [element_index]  -- this is the same as arrays and does not provide bounds checking
	//		vector_name.at(element_index) -- this is the vector syntax this uses the .at method to give an element at a specific position
	//		vector_name.push_back(element) -- this will add an element to the end of the vector (similar to the javascript .push method) and the vector will automatically allocate the required space
	





	//vector <char> vowels;	//not initialized
	//vector <char> vowels(5); //5 initialized to zero
	vector <char> vowels{ 'a', 'e', 'i', 'o', 'u' };
	cout << vowels[0] << endl;
	cout << vowels[4] << endl;

	//vector <int> test_scores(3); //3 elements all initialized to zero
	//vector <int> test_scores(3, 100); //3 elements all initiallized to 100
	vector <int> test_scores{ 100, 98, 89 };

	cout << "\nTest scores using array syntax: " << endl;
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;

	cout << "\nTest scores using vector syntax:" << endl;

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

	cout << "\nEnter 3 test scores: \n";
	cin >> test_scores.at(0); 
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);

	cout << "\nUpdated test scores: " << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;

	cout << "\nEnter a test score to add to the vector: ";
	int scoreToAdd{ 0 };
	cin >> scoreToAdd;

	test_scores.push_back(scoreToAdd);
	cout << "\nEnter one more test score to add to the vector: ";
	cin >> scoreToAdd;

	test_scores.push_back(scoreToAdd);
	cout << "\nTest scores are now: " << endl;

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;

	cout << "There are now  " << test_scores.size() << " scores in the vector." << endl;
	//cout << "This should cause an exception!!" << test_scores.at(10);

	//Example of a 2D-vector
	vector <vector<int>> movieRatings
	{
		{1, 2, 3, 4},
		{1, 2, 4, 4},
		{1, 3, 5, 4}
	};

	cout << "\nHere are the movie ratings for reviewer #1 using array syntax: " << endl;
	cout << movieRatings[0][0] << endl;
	cout << movieRatings[0][1] << endl;
	cout << movieRatings[0][2] << endl;
	cout << movieRatings[0][3] << endl;

	cout << "\nHere are the movie ratings for reviewer #1 using vector syntax: " << endl;
	cout << movieRatings.at(0).at(0) << endl;
	cout << movieRatings.at(0).at(1) << endl;
	cout << movieRatings.at(0).at(2) << endl;
	cout << movieRatings.at(0).at(3) << endl;

	return 0;
}