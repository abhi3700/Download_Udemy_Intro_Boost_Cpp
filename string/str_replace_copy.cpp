/**
 *			replace a copy of the string using Boost string lib
 *			- `replace_first_copy`:  will replace the first occurrence in the source string.
 *			- `replace_first_copy`:  will replace the first occurrence in the source string.
 *			- `replace_nth_copy`:  will replace the nth occurrence in the source string.
 *			- `replace_all_copy`:  will replace all occurrences of a particular character from a string.
*  
*/

#include <iostream>
#include <boost/algorithm/string.hpp>

using std::string;
using namespace boost::algorithm;

int main() {
	string str1 = "abhijit_and_abhijit";

	std::cout << replace_first_copy(str1, "_", "-") << std::endl;		// geeks-for_geeks
	std::cout << replace_last_copy(str1, "_", "-") << std::endl;		// geeks_for-geeks
	std::cout << replace_nth_copy(str1, "_", 0, "-") << std::endl;		// geeks-for_geeks, Numbering starts from 0, 1, 2...
	std::cout << replace_all_copy(str1, "_", "-") << std::endl;			// geeks-for-geeks

	return 0;
}