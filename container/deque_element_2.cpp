#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <deque>

using std::string;
using namespace boost::assign;

int main() {
	typedef std::pair<int, string> pair;
	std::deque<pair> d1;
	// push_front(d1) (1, "abhijit") (2, "victor") (3, "vincent") (4, "cat");			// push from front
	// d1 = list_of<pair> (1, "abhijit") (2, "victor") (3, "vincent") (4, "cat");		// push from back
	d1 = map_list_of (1, "abhijit") (2, "victor") (3, "vincent") (4, "cat");		// push from back

	// access
	std::cout << d1.size() << std::endl;		
	std::cout << d1.front().first << std::endl;		
	std::cout << d1.back().first << std::endl;		
	std::cout << d1[0].first << std::endl;
	std::cout << d1.at(0).second << std::endl;

	auto it = d1.begin();
	std::cout << (*it).first << ", " << (*it).second << std::endl;
	advance(it, 2);
	std::cout << (*it).first << ", " << (*it).second << std::endl;

	std::cout << "============================" << std::endl;
	// display
	for (int i = 0; i < d1.size(); ++i)
	{
		std::cout << d1[i].first << ", " << d1[i].second << std::endl;
	}
	std::cout << "----------------------------" << std::endl;

	for (std::deque<pair>::iterator i = d1.begin(); i != d1.end(); ++i)
	{
		std::cout << (*i).first << ", " << (*i).second << std::endl;
	}
	std::cout << "----------------------------" << std::endl;

	for(auto& i : d1) {
		std::cout << i.first << ", " << i.second << std::endl;
	}

	return 0;
}