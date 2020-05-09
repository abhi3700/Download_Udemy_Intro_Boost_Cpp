#include <iostream>
#include <boost/assign/list_of.hpp>
#include <vector>

using std::string;
using namespace boost::assign;

int main() {
	typedef boost::tuple<int, string, int, string> tuple;
	std::vector<tuple> v1;
	// insert
	// v1 = list_of<tuple>(1, "abhi", 102, "fab") (2, "victor", 103, "design") (3, "ramesh", 104, "testing") (4, "suresh", 105, "quality");
	v1 = tuple_list_of(1, "abhi", 102, "fab") (2, "victor", 103, "design") (3, "ramesh", 104, "testing") (4, "suresh", 105, "quality");

	// access
	std::cout << v1.size() << std::endl;
	std::cout << boost::get<0>(v1[1]) << std::endl;
	std::cout << boost::get<1>(v1[1]) << std::endl;
	std::cout << boost::get<2>(v1[1]) << std::endl;
	std::cout << boost::get<3>(v1.at(1)) << std::endl;

	auto it = v1.begin();
	std::cout << boost::get<0>(*it) << std::endl;
	std::cout << boost::get<1>(*it) << std::endl;
	std::cout << boost::get<2>(*it) << std::endl;
	std::cout << boost::get<3>(*it) << std::endl;
	advance(it, 2);
	std::cout << boost::get<0>(*it) << std::endl;
	std::cout << boost::get<1>(*it) << std::endl;
	std::cout << boost::get<2>(*it) << std::endl;
	std::cout << boost::get<3>(*it) << std::endl;

	// search - TODO

	// display
	for (int i = 0; i < v1.size(); ++i)
	{
		std::cout << boost::get<0>(v1[i]) << ", " << boost::get<1>(v1[i]) << ", " << boost::get<2>(v1[i]) <<", " << boost::get<3>(v1[i]) << std::endl;
		// std::cout << boost::get<0>(v1.at(i)) << ", " << boost::get<1>(v1.at(i)) << ", " << boost::get<2>(v1.at(i)) <<", " << boost::get<3>(v1.at(i)) << std::endl;
	}

	for (std::vector<tuple>::iterator i = v1.begin(); i != v1.end(); ++i)
	{
		std::cout << boost::get<0>(*i) << ", " << boost::get<1>(*i) << ", " << boost::get<2>(*i) <<", " << boost::get<3>(*i) << std::endl;
	}

	for(auto& i : v1) {
		std::cout << boost::get<0>(i) << ", " << boost::get<1>(i) << ", " << boost::get<2>(i) <<", " << boost::get<3>(i) << std::endl;
		
	}


	return 0;
}