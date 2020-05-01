/**
 * 		Assert function
 *		- nothing if the expression is _true_.
 *		- the error (without message) if the expression is _false_.
 * 
 */

// #define BOOST_DISABLE_ASSERTS
#include <iostream>
// #define BOOST_DISABLE_ASSERTS
// #define NDEBUG
#define BOOST_ENABLE_ASSERTS

#include <boost/assert.hpp>
// #define BOOST_DISABLE_ASSERTS

using std::string;
using std::cin;
// #define BOOST_DISABLE_ASSERTS


int main() {
	string name = "";

	std::cout << "Please enter any name: " << std::endl;
	cin >> name;

	BOOST_ASSERT(name == "abhijit");


	return 0;
}
