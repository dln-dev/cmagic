#pragma once

#include <chrono>

typedef std::chrono::high_resolution_clock::time_point tpoint;

/**
 * returns naively calculated factorial of n
 *
 */
double factorial(unsigned short int n);

/**
 * this implementation keeps track of the last factorial calculated.
 * Resets automatically, when used in a new loop (n = 1). ONLY USE 
 * IN LOOPS! 
 * It won't return 0!, so you have to take care that your loop
 * starts such that 1! is the first factorial needed.
 * See testfile for examples.
 *
 */
double staticFac(unsigned short int n);

/**
 * templates have to be declared in the header file, see stackoverflow
 * there are other methods apparently, but none seem to be working (well)
 */
template <typename T>
T **dynMatrix(const unsigned short int rows, const unsigned short int cols) {
	static unsigned short int i;

	T **matrix = new T*[rows];
	matrix[0] = new T[rows * cols];
	for(i = 1; i < rows; i++)
		matrix[i] = matrix[i - 1] + cols;

	return matrix;
}

/**
 * this function returns a std::chrono::high_resolution_clock::time_point 
 * marking the current time. Use this twice and calculate the difference 
 * with "duration(tpoint t1, tpoint t2)" to get the time a calculation
 * took.
 */
tpoint timestamp();

/**
 * measures the difference of two time points and returns a long type
 * integer. Types are intuitive, like seconds, nanoseconds etc., see
 * chrono documentation for hints. Use like this:
 * duration<seconds>(t1, t2)
 */
template <typename T>
long duration(tpoint t1, tpoint t2) {
	return std::chrono::duration_cast<T>(t2-t1).count();
}
