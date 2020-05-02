/**
 * 				`push_front` operator
 */

#include <iostream>
#include <boost/assign/list_inserter.hpp>		// for push_front() operator
#include <boost/assert.hpp>
#include <deque>

using std::string;
using namespace boost::assign;		// for push_front() operator

int main() {
	typedef std::pair<string, string> pair_type;
	std::deque<pair_type> d1;
	std::deque<int> d2;

	// assign
	push_front(d1) ("ram", "sita") ("abhi", "adi") ("laxman", "kalki");		// last inserted is present at first
	push_front(d2) = 1, 2, 3, 4, 5, 6;

	// assert
	BOOST_ASSERT(d1.size() == 3);				// access size of deque.
	BOOST_ASSERT(d1.front().first == "laxman");	// access key of 1st (numbered 0) element(pair here.)
	BOOST_ASSERT(d1.front().second == "kalki");	// access val of 1st (numbered 0) element(pair here.) 
	BOOST_ASSERT(d1[1].first == "abhi");		// access key of 2nd (numbered 1) element (pair here.)
	BOOST_ASSERT(d1[1].second == "adi");		// access val of 2nd (numbered 1) element(pair here.)

	// display the output
	for(auto& [key, val] : d1) {
		std::cout << "key = " << key << ", val = " << val << std::endl;
	}

	for (std::deque<int>::iterator i = d2.begin(); i != d2.end(); ++i)
	{
		std::cout << *i << std::endl;
	}

	return 0;
}
