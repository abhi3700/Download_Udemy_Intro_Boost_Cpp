/*
			Map
			- unique (key, value) pair
			- can have same values with different keys.
				+ E.g. 3: (4, "vincent") ("3", vincent)
			- Not acceptable
				+ E.g. 1: (5, "Cat") (5, "john")
				+ E.g. 2: (5, "Cat") (5, "Cat")

*/
#include <iostream>
#include <map>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>

using std::string;
using namespace boost::assign;


int main() {
	std::map<int, string> m1;
	// insert(m1) (1, "abhijit") (4, "victor") (3, "vincent") (5, "cat");
	// m1 = list_of<std::pair<int, string>>(1, "abhijit") (4, "victor") (3, "vincent") (5, "cat");
	m1 = map_list_of(1, "abhijit") (4, "vincent") (3, "vincent") (5, "cat");

	// access
	std::cout << m1[4] << std::endl;

	auto it = m1.begin();
	std::cout << (*it).second << std::endl;
	advance(it, 2);
	std::cout << (*it).second << std::endl;




	// display
	for (std::map<int, string>::iterator i = m1.begin(); i != m1.end(); ++i)
	{
		std::cout << (*i).first << ", " << (*i).second << std::endl;
	}

	for(auto&& i : m1) {
		std::cout << i.first << ", " << i.second << std::endl;
	}





	return 0;
}