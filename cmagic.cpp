#include "cmagic.h"

double factorial(unsigned short int n) {
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

// n = 0 not supported! Implement first round manually.
double staticFac(unsigned short int n) {
	static unsigned short int lastN = 0;
	static double lastFac = 1;

	if(n == 1 && lastN != 0) {
		lastN = 0;
		lastFac = 1;
	}

	lastFac *= n;
	lastN++;

	return lastFac;
}
