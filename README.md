# cmagic

## TODO: make test

NEW: dynamic matrix generator.

The absence of a factorial function in standard c/c++ bothers me. I have to include an own implementation for every project I need it in.

Commonly loops include terms using the factorial of the iterator. It is highly inefficient to calculate the factorial on every turn, so a function staticFac is introduced with a static variable containing the last computed factorial.
In case the function is used in a new loop, all static variables will be reset.

For testing copy the code on the bottom into a file "example.cpp" and use

g++ cmagic.cpp example.cpp -o example.out

and run example.out

``/* 
 * This example shows how staticFac can be used
 * to calculate Euler's constant in a loop bounded
 * by the relative error when compared to cmath's
 * exp(1).
 *
 */


 #include <iostream>
 #include <cmath>

 #include "cmagic.h"

using namespace std;

int main(void) {
	unsigned short int i = 1;     // short int is enough, 65535! = no good
	float loopE = 1;              // needs 1, since staticFac won't take 0
	float mathE = exp(1);
	float tolerance = 1.0E-4;

	while(abs((loopE - mathE)/mathE) > tolerance)
		loopE += 1/staticFac(i++);

	// staticFac is reset in further loops automatically
	while(abs((loopE - mathE)/mathE) > tolerance/10)
		loopE += 1/staticFac(i++);

	cout << "cmath E:\t" << mathE << "\n";
	cout << "loop E:\t\t" << loopE << "\n";
	cout << "error:\t\t" << abs((loopE-mathE)/mathE) << endl;

	return 0;
}``
