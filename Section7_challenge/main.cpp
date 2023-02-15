#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
	/*
		Write a C++ program as follows:
			Declare 2 empty vectors of integers named vector1 and vector2, respectively.
			Add 10 and 20 to vector1 dynamically using push_back
			Display the elements in vector1 using the at() method as well as its size using the size() method

			Add 100 and 200 to vector2 dynamically using push_back
			Display the elements in vector2 using the at() method as well as its size using the size() method

			Declare an empty 2d vector call vector2D
			Remember, that a 2D vector is a vector of vector<int>

			Add vector1 to vector2D dynamically using push_back
			Add vector2 to vector2D dynamically using push_back

			Display the elements in vector2D using the at() method

			Change vector1.at(0) to 1000

			Display the elements in vector2D again using the at() method

			Display the elements in vector1

			What did you expect? Did you get what you expected? What do you think happened?
	*/


	vector <int> vector1{};
	vector1.push_back(10);
	vector1.push_back(20);
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << vector1.size() << endl;


	vector<int> vector2{};
	vector2.push_back(100);
	vector2.push_back(200);
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << vector2.size() << endl;

	vector <vector <int>> vector2D{};
	vector2D.push_back(vector1);
	vector2D.push_back(vector2);

	cout << vector2D.at(0).at(0) << endl;
	cout << vector2D.at(0).at(1) << endl;
	cout << vector2D.at(1).at(0) << endl;
	cout << vector2D.at(1).at(1) << endl;

	vector1.at(0) = 1000;

	cout << "this is start of 2D vector: " << vector2D.at(0).at(0) << endl;
	cout << vector2D.at(0).at(1) << endl;
	cout << vector2D.at(1).at(0) << endl;
	cout << "this is end of 2D vector: " << vector2D.at(1).at(1) << endl;

	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	
	return 0;
}