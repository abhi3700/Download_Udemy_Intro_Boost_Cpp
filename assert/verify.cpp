/**
 * 		Verify function:
 * 		- nothing if the expression is evaluated correctly.
 * 		- the error (without message) if the expression is NOT VALID.
 * 
 */
#include <iostream>
// #define BOOST_DISABLE_ASSERTS
#include <boost/assert.hpp>

int main() {
	int x(3), y(5);

	BOOST_VERIFY(x == 12 ? y = 10 : y = 20);
	std::cout << "After verify, y = " << y << std::endl;

	// BOOST_ASSERT(x == 12 ? y = 30 : y = 40);
	// std::cout << "After assert, y = " << y << std::endl;

	return 0;
}