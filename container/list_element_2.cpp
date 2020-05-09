#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <list>

using std::string;
using namespace boost::assign;

int main() {
	typedef std::pair<int, string> pair;
	// insert
	std::list<pair> l1 = list_of<pair> (1, "abhijit") (2, "vincent") (3, "Catherine") (4, "John"); 		// push from back
	
	// std::list<pair> l1;
	// push_front(l1) (1, "abhijit") (2, "vincent") (3, "Catherine") (4, "John");		// push from front

	// access
	std::cout << l1.size() << std::endl;
	std::cout << l1.front().first << std::endl;
	std::cout << l1.front().second << std::endl;
	std::cout << l1.back().first << std::endl;
	std::cout << l1.back().second << std::endl;
	auto it = l1.begin();
	std::cout << (*it).first << ", " << (*it).second << std::endl;		// 
	advance(it, 2);
	std::cout << (*it).first << ", " << (*it).second << std::endl;		// 

	std::cout << "=====================================" << std::endl;
	// display
	for (std::list<pair>::iterator i = l1.begin(); i != l1.end(); ++i)
	{
		std::cout << (*i).first << ", " << (*i).second << std::endl;
	}
	std::cout << "=====================================" << std::endl;
	// for (int i = 0; i < l1.size(); ++i)
	// {
	// 	std::cout << l1[i].first << std::endl;
	// }

	for (auto& i : l1) {
		std::cout << i.first << ", " << i.second << std::endl;
	}



	return 0;
}