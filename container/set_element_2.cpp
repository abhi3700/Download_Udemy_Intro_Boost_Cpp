#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <set>

using std::string;
using namespace boost::assign;

int main() {
	typedef std::pair<int, string> pair;
	std::set<pair> s1;
	// insert(s1)(1, "abhijit") (2, "victor") (3, "vincent") (4, "cat");
	// s1 = list_of<pair>(1, "abhijit") (2, "victor") (3, "vincent") (4, "cat");
	s1 = map_list_of(1, "abhijit") (2, "victor") (3, "vincent") (4, "cat");

	// access
	std::cout << s1.size() << std::endl;
	auto it = s1.begin();
	std::cout << (*it).first << ", " << (*it).second << std::endl;
	advance(it, 1);
	std::cout << (*it).first << ", " << (*it).second << std::endl;

	// search: TODO

	std::cout << "=============" << std::endl;
	// display
	for (std::set<pair>::iterator i = s1.begin(); i != s1.end(); ++i)
	{
		std::cout << (*i).first << ", " << (*i).second << std::endl;
	}
	std::cout << "------------------" << std::endl;
	for(auto& i : s1) {
		std::cout << i.first << ", " << i.second << std::endl;
	}

	return 0;
}