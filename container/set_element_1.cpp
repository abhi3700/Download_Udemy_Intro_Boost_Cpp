#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <set>

using std::string;
using namespace boost::assign;

int main() {
	std::set<string> s1;
	// insert(s1) ("abhijit") ("victor") ("vincent") ("cat");	// push_back
	s1 = list_of ("abhijit") ("victor") ("vincent") ("cat");	// push_back

	// access
	std::cout << s1.size() << std::endl;
	auto it = s1.begin();
	std::cout << *it << std::endl;
	advance(it, 1);
	std::cout << *it << std::endl;

	std::cout << "======================" << std::endl;
	// display
	for (std::set<string>::iterator i = s1.begin(); i != s1.end(); ++i)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "---------------------" << std::endl;

	for(auto& i : s1) {
		std::cout << i << std::endl;
	}

	// search
	auto s = "vincent";
	auto res_it = std::find(s1.begin(), s1.end(), s);
	if (res_it != s1.end())
	{
		std::cout << s << " is found." << std::endl;
	} else {
		std::cout << s << " is NOT found." << std::endl;
	}

	return 0;
}