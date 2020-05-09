#include <iostream>
#include <boost/assign/list_of.hpp>
#include <stack>

using std::string;
using namespace boost::assign;

int main() {
	typedef boost::tuple<int, string, int, string>	tuple;
	std::stack<tuple> s1;
	// s1 = list_of<tuple> (1, "abhijit", 192, "fab")
	// 					(2, "victor", 234, "testing")
	// 					(3, "vincent", 213, "design")
	// 					(4, "cat", 653, "quality").to_adapter();

	s1 = tuple_list_of (1, "abhijit", 192, "fab")
						(2, "victor", 234, "testing")
						(3, "vincent", 213, "design")
						(4, "cat", 653, "quality").to_adapter();

	// access
	std::cout << s1.size() << std::endl;
	std::cout << boost::get<0>(s1.top()) << ", " << boost::get<1>(s1.top()) << ", " << boost::get<2>(s1.top()) << ", " << boost::get<3>(s1.top()) << std::endl;
	// s1.pop();
	// std::cout << boost::get<0>(s1.top()) << ", " << boost::get<1>(s1.top()) << ", " << boost::get<2>(s1.top()) << std::endl;

	// search: TODO

	// display
	while(!s1.empty()) {
		std::cout << boost::get<0>(s1.top()) << ", " << boost::get<1>(s1.top()) << ", " << boost::get<2>(s1.top()) << ", " << boost::get<3>(s1.top()) << std::endl;
		s1.pop();    
	}

	return 0;
}