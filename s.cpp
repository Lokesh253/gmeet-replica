// C++ Program to demonstrate the working of
// getline(), push_back() and pop_back()
#include <iostream>
#include <string> // for string class
using namespace std;

// Driver Code
int main()
{
	// course instructor
	string faculty_name = "Jagadeesh kakarla";
    string role         = "Assistant professor";
    string Email        = "jagadeeshk@iiitdm.ac.in";
    string phone        = "Ph: 044-27476383 ";



    





	// Taking string input using getline()
	getline(cin, str);

	// Displaying string
	cout << "The initial string is : ";
	cout << str << endl;

	// Inserting a character
	str.push_back('s');

	// Displaying string
	cout << "The string after push_back operation is : ";
	cout << str << endl;

	// Deleting a character
	str.pop_back();

	// Displaying string
	cout << "The string after pop_back operation is : ";
	cout << str << endl;

	return 0;
}
