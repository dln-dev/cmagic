#pragma once

double factorial(unsigned short int n);

/* 
 * this implementation keeps track of the last factorial calculated.
 * Resets automatically, when used in a new loop (n = 1). ONLY USE 
 * IN LOOPS! 
 * It won't return 0!, so you have to take care that your loop
 * starts such that 1! is the first factorial needed.
 *
 */
double staticFac(unsigned short int n);

//template <typename T>
//T **dynMatrix(const unsigned short int rows, const unsigned short int cols);

float **dynMatrix(const unsigned short int rows, const unsigned short int cols);
