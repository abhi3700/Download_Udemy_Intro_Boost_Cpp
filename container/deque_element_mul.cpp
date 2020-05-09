#include <iostream>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign/list_of.hpp>
#include <deque>

using std::string;
using namespace boost::assign;

int main() {
	typedef boost::tuple<int, string, int, string> tuple;
	std::deque<tuple> d1;
	// push_front(d1) (1, "abhijit", 102, "fab")
	// 				(2, "victor", 103, "design")
	// 				(3, "vincent", 106, "testing")
	// 				(4, "cat", 109, "quality");

	// d1 = list_of<tuple> (1, "abhijit", 102, "fab")
	// 				(2, "victor", 103, "design")
	// 				(3, "vincent", 106, "testing")
	// 				(4, "cat", 109, "quality");

	d1 = tuple_list_of (1, "abhijit", 102, "fab")
					(2, "victor", 103, "design")
					(3, "vincent", 106, "testing")
					(4, "cat", 109, "quality");

	// access
	std::cout << d1.size() << std::endl;
	std::cout << boost::get<0>(d1[0]) << std::endl;
	std::cout << boost::get<1>(d1[0]) << std::endl;
	std::cout << boost::get<1>(d1.at(0)) << std::endl;
	std::cout << boost::get<3>(d1.at(2)) << std::endl;

	auto it = d1.begin();
	std::cout << boost::get<3>(*it) << std::endl;
	advance(it, 2);
	std::cout << boost::get<3>(*it) << std::endl;

	std::cout << "============================" << std::endl;
	// display
	for (int i = 0; i < d1.size(); ++i)
	{
		std::cout << boost::get<0>(d1[i]) << ", " <<
					boost::get<1>(d1[i]) << ", " <<
					boost::get<2>(d1[i]) << ", " <<
					boost::get<3>(d1[i]) << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	for (std::deque<tuple>::iterator i = d1.begin(); i != d1.end(); ++i)
	{
		std::cout << boost::get<0>(*i) << ", " <<
					boost::get<1>(*i) << ", " <<
					boost::get<2>(*i) << ", " <<
					boost::get<3>(*i) << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;

	for(auto& i : d1) {
		std::cout << boost::get<0>(i) << ", " <<
					boost::get<1>(i) << ", " <<
					boost::get<2>(i) << ", " <<
					boost::get<3>(i) << std::endl;
		
	}

	return 0;
}