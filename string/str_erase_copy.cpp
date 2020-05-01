/**
 *  Erase a copy of the string using Boost string lib
* 		1. `erase_first_copy`: will remove the first occurrence in the source string.
* 		2. `erase_nth_copy`: will remove the nth occurrence in the source string.
* 		3. `erase_all_copy`: will remove all occurrences of a particular character from a string.
* 		4. `erase_head_copy`: To shorten a string by a specific number of characters from head.
* 		5. `erase_tail_copy`: To shorten a string by a specific number of characters from tail.
*  
*/

#include <iostream>
#include <boost/algorithm/string.hpp>

using std::string;
using namespace boost::algorithm;

int main() {
	string str1 = "abhijitandabhijit";

	std::cout << erase_first_copy(str1, "a") << std::endl;		// remove first occurence
	std::cout << erase_nth_copy(str1, "a", 1) << std::endl;		// remove 2nd occurence (numbering starts from 0, 1, 2,....)
	std::cout << erase_all_copy(str1, "a") << std::endl;		// removes all "g" occurences
	std::cout << erase_head_copy(str1, 5) << std::endl;			// removes 5 characters from the head of string
	std::cout << erase_tail_copy(str1, 1) << std::endl;			// removes 1 characters from the tail of string


	return 0;
}