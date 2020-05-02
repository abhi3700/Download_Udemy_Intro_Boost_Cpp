/**
 * 					`tuple_list_of' operator
 * 
 */

#include <iostream>
#include <boost/assign/list_of.hpp>		// tuple_list_of, boost::tuple
#include <vector>

using std::string;
using namespace boost::assign;			// tuple_list_of, boost::tuple

int main() {
	std::vector<boost::tuple<int, string, int>> v1 = tuple_list_of(1, "abhi", 192) (3, "victor", 1233) (5, "anmesh", 342);
	// v1 = list_of<boost::tuple<int, string, int>>(1, "abhi", 192) (3, "victor", 1233) (5, "anmesh", 342);  // M-2

	// assert
	BOOST_ASSERT(v1.size() == 3);
	BOOST_ASSERT(boost::get<0>(v1[0]) == 1);
	BOOST_ASSERT(boost::get<1>(v1[0]) == "abhi");
	BOOST_ASSERT(boost::get<2>(v1[0]) == 192);

	// print all the elements
	for (int i = 0; i < v1.size(); ++i) {
		std::cout << boost::get<0>(v1[i]) << ", " << boost::get<1>(v1[i])<< ", " << boost::get<2>(v1[i]) << std::endl;

	}

	return 0;
}