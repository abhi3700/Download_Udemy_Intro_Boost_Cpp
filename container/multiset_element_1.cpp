/*
				Multiset
				- multiple elements can have same values
					+ E.g. ("abhijit") ("abhijit")

*/
#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <set>

using std::string;
using namespace boost::assign;

int main() {
	std::multiset<string> s2;
	// insert(s2) ("abhijit") ("victor") ("vincent") ("cat");	// push_back
	s2 = list_of ("abhijit") ("abhijit") ("vincent") ("cat");	// push_back

	// access
	std::cout << s2.size() << std::endl;
	auto it = s2.begin();
	std::cout << *it << std::endl;
	advance(it, 1);
	std::cout << *it << std::endl;

	std::cout << "======================" << std::endl;
	// display
	for (std::set<string>::iterator i = s2.begin(); i != s2.end(); ++i)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "---------------------" << std::endl;

	for(auto& i : s2) {
		std::cout << i << std::endl;
	}

	std::cout << "---------------------" << std::endl;
	// search
	auto s = "vincent";
	auto res_it = std::find(s2.begin(), s2.end(), s);
	if (res_it != s2.end())
	{
		std::cout << s << " is found." << std::endl;
	} else {
		std::cout << s << " is NOT found." << std::endl;
	}

	return 0;
}