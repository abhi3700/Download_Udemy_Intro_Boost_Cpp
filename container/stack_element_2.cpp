#include <iostream>
#include <boost/assign/list_of.hpp>
#include <stack>

using std::string;
using namespace boost::assign;

int main() {
	typedef std::pair<int, string> pair;
	std::stack<pair> s1;
	// s1 = list_of<pair> (1, "abhijit") (2, "victor") (3, "vincent") (4, "cat").to_adapter();
	s1 = map_list_of (1, "abhijit") (2, "victor") (3, "vincent") (4, "cat").to_adapter();

	// access
	std::cout << s1.size() << std::endl;
	std::cout << s1.top().first << std::endl;
	std::cout << s1.top().second << std::endl;
	// s1.pop();
	// std::cout << s1.top().first << std::endl;
	// std::cout << s1.top().second << std::endl;

	// search: TODO

	// display
	while(!s1.empty()) {
	    std::cout << s1.top().first << ", " << s1.top().second << std::endl;
	    s1.pop();
	}

	return 0;
}