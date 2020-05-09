#include <iostream>
#include <boost/assign/list_of.hpp>
#include <stack>

using std::string;
using namespace boost::assign;

int main() {
	std::stack<string> s1;
	s1 = list_of("abhijit") ("victor") ("vincent") ("cat").to_adapter();

	// access
	std::cout << s1.size() << std::endl;
	std::cout << s1.top() << std::endl;


	std::cout << "========search==================" << std::endl;
	// search
	auto s = "cat";
	auto i = 0;

	while(!s1.empty()) {
		if(s1.top() == s) {
			std::cout << s << " is found at position: " << i << std::endl;
			break;

		} else {
			s1.pop();
			++i;
		}
	}
	if (s1.empty())
	{
		std::cout << s << " is NOT found." << std::endl;
	}

	std::cout << "The current stack is: " << std::endl;
	std::cout << "========display==================" << std::endl;
	// display
	while(!s1.empty()) {
	    std::cout << s1.top() << std::endl;
	    s1.pop();
	}

	return 0;
}