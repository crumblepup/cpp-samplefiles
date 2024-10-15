#include <iostream>
#include <vector>

//typedef is a reserved keyword used to create a second name (alias) for another datatype.
//this might help with readability and typo reduction.

//typedef std::string text_t; //this turns <std::string> into <text_t>.
//typedef int number_t;
//There's a much easier way though.

using text_t = std::string;
//using number_t = int; //making aliases for <int> has been deprecated in newer versions of C++

int main()
{
	text_t firstName = "Yumiko";
	int age = 18; //just use int <object> instead

	std::cout << firstName << '\n';
	std::cout << age << '\n';

	return 0;
}
