/*
				Multiset of element 2
				- multiple elements can have same values
					+ E.g. (1, "abhijit") (3, "abhijit")
				- multiple elements can have same keys & values
					+ E.g. (1, "abhijit") (1, "abhijit")
				- sorting preference: key >> value (in ascending order)
*/
#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <set>

using std::string;
using namespace boost::assign;

#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <set>

using std::string;
using namespace boost::assign;

int main() {
	typedef std::pair<int, string> pair;
	std::multiset<pair> s2;
	// insert(s2)(1, "abhijit") (2, "victor") (3, "vincent") (4, "cat");
	// s2 = list_of<pair>(1, "abhijit") (2, "victor") (3, "vincent") (4, "cat");
	s2 = map_list_of(3, "john") (3, "abhijit") (2, "vincent") (4, "cat");

	// access
	std::cout << s2.size() << std::endl;
	auto it = s2.begin();
	std::cout << (*it).first << ", " << (*it).second << std::endl;
	advance(it, 1);
	std::cout << (*it).first << ", " << (*it).second << std::endl;

	// search: TODO

	std::cout << "=============" << std::endl;
	// display
	for (std::set<pair>::iterator i = s2.begin(); i != s2.end(); ++i)
	{
		std::cout << (*i).first << ", " << (*i).second << std::endl;
	}
	std::cout << "------------------" << std::endl;
	for(auto& i : s2) {
		std::cout << i.first << ", " << i.second << std::endl;
	}

	return 0;
}