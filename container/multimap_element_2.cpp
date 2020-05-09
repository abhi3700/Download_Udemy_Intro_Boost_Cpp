/*
			Multimap
			- same keys with 2 same/different values
				+ E.g. 1: (5, "Cat") (5, "john")
				+ E.g. 2: (5, "Cat") (5, "Cat")
			- same values with different keys e.g. (4, "vincent") ("3", vincent)
*/
#include <iostream>
#include <map>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>

using std::string;
using namespace boost::assign;


int main() {
	std::multimap<int, string> m2;
	// insert(m2) (1, "abhijit") (4, "victor") (3, "vincent") (5, "cat");
	// m2 = list_of<std::pair<int, string>>(1, "abhijit") (4, "victor") (3, "vincent") (5, "cat");
	m2 = map_list_of(1, "abhijit") (4, "vincent") (3, "vincent") (5, "cat") (5, "cat");

	// access
	auto it = m2.begin();
	std::cout << (*it).second << std::endl;
	advance(it, 2);
	std::cout << (*it).second << std::endl;




	// display
	for (std::multimap<int, string>::iterator i = m2.begin(); i != m2.end(); ++i)
	{
		std::cout << (*i).first << ", " << (*i).second << std::endl;
	}

	for(auto&& i : m2) {
		std::cout << i.first << ", " << i.second << std::endl;
	}





	return 0;
}