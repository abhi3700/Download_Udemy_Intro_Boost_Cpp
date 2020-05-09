#include <iostream>
#include <boost/assign/list_of.hpp>
#include <boost/assign/list_inserter.hpp>
#include <list>

using std::string;
using namespace boost::assign;

int main() {
	typedef boost::tuple<int, string, int, string> tuple;
	std::list<tuple> l1; 
	l1 = list_of <tuple>(1, "abhijit", 102, "fab") 
										(2, "victor", 103, "design") 
	 									(3, "john", 105, "quality")
	 									(4, "vincent", 107, "testing");
	// l1 = tuple_list_of(1, "abhijit", 102, "fab") 
	// 									(2, "victor", 103, "design") 
	//  									(3, "john", 105, "quality")
	//  									(4, "vincent", 107, "testing");

	// push_front(l1) (1, "abhijit", 102, "fab") 
	// 									(2, "victor", 103, "design") 
	//  									(3, "john", 105, "quality")
	//  									(4, "vincent", 107, "testing");

	// access
	std::cout << l1.size() << std::endl;
	// std::cout << boost::get<0>l1[0] << std::endl;
	std::cout << boost::get<0>(l1.front()) << std::endl;
	std::cout << boost::get<1>(l1.front()) << std::endl;
	std::cout << boost::get<2>(l1.front()) << std::endl;
	std::cout << boost::get<3>(l1.front()) << std::endl;

	auto it = l1.begin();
	advance(it, 2);
	std::cout << boost::get<0>(*it) << ", " 
				<< boost::get<1>(*it) << ", " 
				<< boost::get<2>(*it) << ", "
				<< boost::get<3>(*it)
				<< std::endl;


	// search: TODO

	// display
	for (std::list<tuple>::iterator i = l1.begin(); i != l1.end(); ++i)
	{
			std::cout << boost::get<0>(*i) << ", " 
				<< boost::get<1>(*i) << ", " 
				<< boost::get<2>(*i) << ", "
				<< boost::get<3>(*i)
				<< std::endl;
	}
	for(auto& i : l1) {
			std::cout << boost::get<0>(i) << ", " 
				<< boost::get<1>(i) << ", " 
				<< boost::get<2>(i) << ", "
				<< boost::get<3>(i)
				<< std::endl;
		
	}


	return 0;
}