/**
 * 		Custom Assertion function using templates
 * 		- arg-1: bool expression
 *		- arg-2: lambda func
 */

#include <iostream>

template<typename F>
void assert_custom_func(bool expr, F fn) {
	if (!expr)
	{
		fn();
		abort();
	}
}

int main() {
	int x(20), y(30);
	assert_custom_func(
		x == y,
		[&](){
				std::cout << "Assertion failed: because x = " << x << " is different than y = " << y << std::endl;
			}
	);



	return 0;
}