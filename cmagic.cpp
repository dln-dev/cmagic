#include "cmagic.h"

double factorial(unsigned short int n) {
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

// n = 0 not supported! Implement first round manually.
// Reset mechanism won't work after using this only once.
// Take care!
double staticFac(unsigned short int n) {
	static double lastFac = 1;

	if(n == 1 && lastFac != 1)
		lastFac = 1;

	lastFac *= n;

	return lastFac;
}
