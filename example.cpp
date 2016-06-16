/* 
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
}
