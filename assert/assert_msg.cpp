/**
 * 		Assert function
 *		- nothing if the expression is _true_.
 *		- the error (with custom message) if the expression is _false_.
 * 
 */

#include <iostream>
#include <boost/assert.hpp>

using std::string;
using std::cin;


int main() {
	string name = "";

	std::cout << "Please enter any name: " << std::endl;
	cin >> name;

	BOOST_ASSERT_MSG(name == "abhijit", "SORRY! you have entered an Incorrect name.");


	return 0;
}
