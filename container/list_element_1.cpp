#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <list>
#include <algorithm>
// #include <iterator>


using std::string;
// using std::list::begin;
// using list::begin;
using namespace boost::assign;

int main() {
	// std::list<string> l1;
	// push_front(l1) ("abhijit") ("victor") ("ramesh") ("suresh");		// push from front

	std::list<string> l1 = list_of("abhijit") ("victor") ("ramesh") ("suresh");		// push from back

	// access
	std::cout << l1.size() << std::endl;
	std::cout << l1.front() << std::endl;
	std::cout << l1.back() << std::endl;
	// auto it = l1.begin();
	// std::cout << *it << std::endl;
	// advance(it, 2);
	// std::cout << *it << std::endl;

	// search
	string s = "abhijit";
	auto find_it = std::find(l1.begin(), l1.end(), s);
	if (find_it != l1.end())
	{
		std::cout << s << " is FOUND!" << std::endl;
	} else {
		std::cout << s << " is NOT FOUND!" << std::endl;

	}

	std::cout << "===================================" << std::endl;
	// display
	for (std::list<string>::iterator i = l1.begin(); i != l1.end(); ++i)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;

	for(auto& i : l1) {
		std::cout << i << std::endl;
	}

	return 0;
}