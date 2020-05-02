/**
 * 				`insert` operator
 */
#include <iostream>
#include <boost/assign/list_inserter.hpp>	// for insert() operator
#include <map>

using namespace boost::assign;	// for insert() operator
using std::string;

int main() {
	std::map<string, int> students;

	// assign
	insert(students)
			("ramesh", 101)	("suresh", 102)
			("gaurav", 103) ("sid", 104)
			("sukhen", 105) ("mangal", 106);

	// assert
	BOOST_ASSERT(students.size() == 6);
	BOOST_ASSERT(students["ramesh"] == 101);
	BOOST_ASSERT(students["suresh"] == 102);

	// display the output
	for(auto& [key, val] : students) {
		std::cout << "key = " << key << ", val = " << val << std::endl;
	}

	return 0;
}