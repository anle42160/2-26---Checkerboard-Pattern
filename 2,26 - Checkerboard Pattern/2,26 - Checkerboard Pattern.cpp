// 2.26.) Display the following checkerboard pattern with eight output statements, then display the same pattern using as few statements as possible.
// Programmer: Anna Le

#include <iostream>
using namespace std;

int main()
{
	//Defining string variables to reduce the amount of lines needed
	string firstPattern = "\n* * * * * * * *";
	string secondPattern = "\n * * * * * * * *";

	//Pattern output
	cout << firstPattern << secondPattern << firstPattern << secondPattern << firstPattern << secondPattern << firstPattern << secondPattern << endl;
}
