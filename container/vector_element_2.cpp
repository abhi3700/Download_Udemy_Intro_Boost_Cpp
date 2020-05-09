#include <iostream>
#include <boost/assign/list_of.hpp>
#include <vector>
#include <algorithm>

using std::string;
using namespace boost::assign;


// template<typename T>
// bool operator==(T a, T b) {
// 	return a == b ? true : false; 
// }

// template <typename T1, typename T2>
// void find(T1 v, T2 s) {
// 	auto it = v.begin();
// 	while(it != v.end()) {
// 		// if (typeid())
// 		if ((*it).first == s) {
// 			std::cout << s << " is found at first val of position " << it - v.begin() << std::endl;
// 		} else if ((*it).second == s) {
// 			std::cout << s << " is found at first val of position " << it - v.begin() << std::endl;
// 		} else {
// 			std::cout << s << " is NOT found " << std::endl;
// 		}
// 	}

// }

int main() {
	typedef std::pair<string, int> pair;
	std::vector<pair> v1;
	// insert
	v1 = list_of<pair>("abhijit", 102) ("adi", 103) ("victor", 1034) ("vincent", 102);
	// v1 = map_list_of("abhijit", 102) ("adi", 103) ("victor", 1034) ("vincent", 102);
	
	// access
	std::cout << v1.size() << std::endl;
	std::cout << v1[0].first << std::endl;
	std::cout << v1[0].second << std::endl;
	std::cout << v1.at(0).first << std::endl;
	std::cout << v1.at(0).second << std::endl;

	auto it = v1.begin();
	std::cout << (*it).first << std::endl;
	std::cout << (*it).second << std::endl;
	advance(it, 1);
	std::cout << (*it).first << std::endl;
	std::cout << (*it).second << std::endl;
	advance(it, -1);
	std::cout << (*it).first << std::endl;
	std::cout << (*it).second << std::endl;


	// search
	// auto s = 102;
	// find(v1, s);

	// if(it != v1.end()) {
	// 	std::cout << s << " is found at position " << it - v1.begin() << std::endl;
	// } else {
	// 	std::cout << s << " is NOT found." << std::endl;
	// }

	std::cout << "===============================" << std::endl;
	// display
	for (int i = 0; i < v1.size(); ++i)
	{
		std::cout << v1[i].first << ", " << v1[i].second << std::endl;
	}
	std::cout << "-------------------------------" << std::endl;
	for(auto& i : v1) {
		std::cout << i.first << ", " << i.second << std::endl;
	}

	std::cout << "-------------------------------" << std::endl;
	for (std::vector<pair>::iterator i = v1.begin(); i != v1.end(); ++i)
	{
		std::cout << (*i).first << ", " << (*i).second << std::endl;
	}



	return 0;
}