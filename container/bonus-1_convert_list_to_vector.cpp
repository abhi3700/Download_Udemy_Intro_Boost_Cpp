/**
 * 								Convert List to Vector
 * 								- Why?
 * 									+ bcoz, difficult to access element by position, unlike vector, deque.
 * 									+ non-contiguous memory storage
 * 								- Element type (single)
 * 								- How?
 * 									+ simply add the list begineend() into vector function.
 * 
 * 
 */

#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <list>
#include <vector>

using namespace boost::assign;

int main() {
	// std::list<int> l1 = list_of(1) (2) (3) (4);			// insert from back
	std::list<int> l1;
	push_front(l1)(1) (2) (3) (4);							// insert from front


	std::vector<int> v1(l1.begin(), l1.end());

	// access
	std::cout << v1[0] << std::endl;


	std::cout << "=======================================" << std::endl;
	// search
	auto s = 2;
	auto res_it = std::find(v1.begin(), v1.end(), s);
	if (res_it != v1.end())
	{
		std::cout << s << " is found at position: " << res_it - v1.begin() << std::endl;
	} else {
		std::cout << s << " is NOT found." << std::endl;
	}

	std::cout << "=======================================" << std::endl;
	// display
	for (int i = 0; i < v1.size(); ++i)
	{
		std::cout << v1[i] << std::endl;
	}


	return 0;
}