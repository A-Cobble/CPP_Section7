#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	//Element_Type array_name [dim1_size][dim2_size]
	//int movieRating [3][4];
	
	/*Example:
		const int rows{3};
		const int cols {4};
		int movieRating [rows][cols];	
								movie (second index)
									0	1	2	3


		   reviewer		0			0	4	3	5
		(first index)	1			2	3	3	5
						2			1	4	4	5
		

		cin >> movieRating[1][2];
		cout << movieRating[1][2]; this transverses the grid and would give a value of 5
	*/

	int movie_rating[3][4]
	{
		{0, 4, 3, 5},
		{2, 3, 3, 5},
		{1, 4, 4, 5}
	};

	cout << "\nThis is the result of moving to index 1 of rows and index 2 of cols: \n" << movie_rating[1][2];

	return 0;
}