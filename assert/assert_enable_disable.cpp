/**
 * 		Assert function with enable/disable macros
 *		- `#define BOOST_DISABLE_ASSERTS`: disable assert methods
 *		- `#define NDEBUG`: disable assert methods
 *		- `#define BOOST_ENABLE_ASSERTS`: enable assert methods. Enabled by default.
 * 
 */

// #define BOOST_DISABLE_ASSERTS
#include <iostream>
// #define BOOST_DISABLE_ASSERTS
# define NDEBUG
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
