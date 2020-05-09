#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <deque>

using std::string;
using namespace boost::assign;

int main() {
	std::deque<string> d1;
	push_front(d1) ("abhijit") ("victor") ("vincent") ("cat");		// pushing from front
	// d1 = list_of("abhijit") ("victor") ("vincent") ("cat");			// pushing from back

	// access
	std::cout << d1.size() << std::endl;
	std::cout << d1.front() << std::endl;
	std::cout << d1.back() << std::endl;
	std::cout << d1[0] << std::endl;
	std::cout << d1.at(0) << std::endl;

	auto it = d1.begin();
	std::cout << *it << std::endl;
	advance(it, 2);
	std::cout << *it << std::endl;

	// search
	auto s = "victor";
	auto res_it = std::find(d1.begin(), d1.end(), s);
	if (res_it != d1.end())
	{
		std::cout << s << " is found at position: " << res_it - d1.begin() << std::endl;
	} else {
		std::cout << s << " is NOT found." << std::endl;
	}

	std::cout << "====================" << std::endl;
	// display
	for (int i = 0; i < d1.size(); ++i)
	{
		std::cout << d1[i] << std::endl;
	}

	std::cout << "---------------------" << std::endl;
	for (std::deque<string>::iterator i = d1.begin(); i != d1.end(); ++i)
	{
		std::cout << *i << std::endl;
	}
	std::cout << "---------------------" << std::endl;

	for(auto& i : d1) {
		std::cout << i << std::endl;
	}


	return 0;
}