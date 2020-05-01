/**
 * 			Split a string into substrings separated by separator
 * 			- input
 * 				+ result: container with substrings
 * 				+ input: string to be splitted
 * 				+ separator: like \t, \n
 * 
 * 
 */
#include <iostream>
#include <boost/algorithm/string.hpp>
#include <vector>

using boost::algorithm::split;
using std::string;

int main() {
	string str1 = "abhijit\tand\tabhijit";		// for tabs
	// string str2 = "abhijit and abhijit";		// for space
	std::vector<string> result;
	split(result, str1, boost::is_any_of("\t"));	// for tabs
	// split(result, str2, boost::is_any_of(" "));	// for spaces

	for (int i = 0; i < result.size(); ++i)
	{
		std::cout << result[i] << std::endl;
	}

	return 0;
}