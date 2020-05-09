#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <set>

using std::string;
using namespace boost::assign;

int main() {
	typedef boost::tuple<int, string, int, string> tuple_t;
	std::set<tuple_t> s1;
	// insert(s1)(1, "abhijit", 102, "fab")
	// 			(2, "victor", 104, "design")
	// 			(3, "vincent", 106, "testing")
	// 			(4, "cat", 107, "quality");

	// s1 = list_of<tuple_t>(1, "abhijit", 102, "fab")
	// 			(2, "victor", 104, "design")
	// 			(3, "vincent", 106, "testing")
	// 			(4, "cat", 107, "quality");

	s1 = tuple_list_of(1, "abhijit", 102, "fab")
				(2, "victor", 104, "design")
				(3, "vincent", 106, "testing")
				(4, "cat", 107, "quality");

	return 0;
}