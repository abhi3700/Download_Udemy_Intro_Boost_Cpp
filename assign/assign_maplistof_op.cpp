/**
 * 					'map_list_of' operator
 * 
 */
#include <iostream>
#include <boost/assign/list_of.hpp>			// 'map_list_of' operator
#include <map>
#include <list>

using namespace boost::assign;				// 'map_list_of' operator

int main() {
	std::map<int, int> m1 = map_list_of(1, 10)(2, 20)(3, 30)(4, 40)(5, 50);

	// assert
	BOOST_ASSERT(m1.size() == 5);
	BOOST_ASSERT(m1[1] == 10);
	BOOST_ASSERT(m1[4] == 40);

	// display the elements
	for(auto& [k, v] : m1) {
		std::cout << k << " : " << v << std::endl;
	}

	// =============using 'list_of'===========================
	m1 = list_of<std::pair<int, int>>(1, 10)(2, 20)(3, 30)(4, 40)(5, 50);
	BOOST_ASSERT(m1.size() == 5);
	BOOST_ASSERT(m1[1] == 10);
	BOOST_ASSERT(m1[4] == 40);

	// display the elements
	for(auto& [k, v] : m1) {
		std::cout << k << " : " << v << std::endl;
	}






	return 0;
}