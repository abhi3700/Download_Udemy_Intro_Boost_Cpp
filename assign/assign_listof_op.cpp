/**
 *				`list_of` operator 
 */
#include <iostream>
#include <boost/assign/list_of.hpp>		// list_of() operator
#include <boost/assert.hpp>
#include <list>
#include <stack>
#include <iterator>

using std::string;
using namespace boost::assign;

int main() {	
	//===============LIST====================================
	// assign
	std::list<int> l1 = list_of(1) (21) (34) (55) (67);
	std::list<int>::iterator it = l1.begin();

	// assert
	BOOST_ASSERT(l1.size() == 5);
	BOOST_ASSERT(l1.front() == 1);
	BOOST_ASSERT(l1.back() == 67);
	advance(it, 2);		// move the iterator's position from 0 to 2
	BOOST_ASSERT(*it == 34);
	advance(it, -1);	// move the iterator's position from 2 to 1
	BOOST_ASSERT(*it == 21);


	// display the output
	for (std::list<int>::iterator i = l1.begin(); i != l1.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	//===============STACK====================================
	// assign
	std::stack<string> s1 = list_of("abhi") ("ram") ("shyam") ("victor").to_adapter();

	// assert
	BOOST_ASSERT(s1.size() == 4);
	BOOST_ASSERT(s1.top() == "victor");

	while(!s1.empty()) {
	    std::cout << s1.top() << std::endl;
	    s1.pop();
	}


	return 0;
}