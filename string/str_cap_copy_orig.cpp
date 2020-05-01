/**
 *  uppercase/lowercase original string or a copy of the string using Boost string lib
 *  1. to_upper() or to_lower(): convert the case of characters in a string using a specified locale.
 *  2. to_upper_copy() and to_lower_copy(): returns the copy of the converted string.
 *  3. return the final string
 */

#include <iostream>
#include <boost/algorithm/string.hpp>

using std::string;
using namespace boost::algorithm;

int main() {
	string str1 = " hello string1! ";
	string str2 = " hello string2! ";

	to_upper(str1);
	std::cout << str1 << std::endl;		//	" HELLO STRING1! " 
	
	to_upper_copy(str2);
	std::cout << str2 << std::endl;		// " hello string2! "	


	return 0;
}