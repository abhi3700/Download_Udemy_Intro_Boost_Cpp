/**
 * 			Trim whitespaces of the string from head & tail of the string
 * 			- `trim`: will trim the whitespaces from head/tail of the original string. 
 * 			- `trim_copy`: will trim the whitespaces from head/tail of the copied string. 
 * 
 * 
 */

#include <iostream>
#include <boost/algorithm/string.hpp>

using std::string;
using namespace boost::algorithm;

int main() {
	string str1 = "   Hello string1!	";
	string str2 = "   Hello string2!	";

	trim(str1);
	std::cout << str1 << std::endl;

	trim_copy(str2);
	std::cout << str2 << std::endl;


	return 0;
}