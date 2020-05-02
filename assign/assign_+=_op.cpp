/**
 * 				`+=` operator
 */

#include <iostream>			// cout, endl
#include <boost/assign/std/vector.hpp>		// for vector & '+=' operator
#include <boost/assert.hpp>		// for BOOST_ASSERT [not Mandatory, if boost/ is included in any form]

using namespace boost::assign;		// for += operator 

int main() {
	std::vector<int> v1;

	// assign
	v1 += 1, 2, 3, 4, 5;	

	// assert
	BOOST_ASSERT(v1.size() == 5);		// nothing, if true
	BOOST_ASSERT(v1[0] == 1);			// nothing, if true
	BOOST_ASSERT(v1[4] == 5);			// nothing, if true

	// display the output
	// M-1
	for (std::vector<int>::iterator i = v1.begin(); i != v1.end(); ++i)
	{
		std::cout << *i << std::endl;
	}
	// M-2
	// for (int i = 0; i < v1.size(); ++i)
	// {
	// 	std::cout << v1[i] << std::endl;
		// std::cout << v1.at(i) << std::endl;
	// }

	return 0;
}