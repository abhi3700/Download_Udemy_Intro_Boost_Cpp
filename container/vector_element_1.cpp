#include <iostream>					// cout, endl
#include <boost/assign/std/vector.hpp>			// vector, '+='
#include <boost/assign/list_of.hpp>
#include <algorithm>			// std::find

using std::string;
using namespace boost::assign;


int main() {
	std::vector<string> v1; 
	// insert
	// v1 += "abhi", "adi", "i am a good boy";		// 
	v1 = list_of("abhi") ("adi") ("i am a good boy");

	// access
	std::cout << v1.size() << std::endl;
	std::cout << v1.at(2) << std::endl;
	std::cout << v1.back() << std::endl;
	std::cout << v1.front() << std::endl;
	std::cout <<  v1[1]<< std::endl;

	std::cout << "=======================" << std::endl;
	//--------------------------------------------------------------------------------------------
	// search
	string s = "adi";
	auto it = std::find(v1.begin(), v1.end(), s);

	if(it != v1.end()) {
		std::cout << s << " is found at position " << (it - v1.begin()) << std::endl;
	} else {
		std::cout << s << " is NOT found." << std::endl;
	}

	std::cout << "=======================" << std::endl;
	//--------------------------------------------------------------------------------------------
	// display
	// M-1
	for(auto& i : v1) {
		std::cout << i << std::endl;
	}

	std::cout << "-------------------------------------" << std::endl;
	// M-2
	for (int i = 0; i < v1.size(); ++i)
	{
		std::cout << v1[i] << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	// M-3
	for (std::vector<string>::iterator i = v1.begin(); i != v1.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	return 0;
}