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

/*template <typename T>
T **dynMatrix(const unsigned short int rows, const unsigned short int cols) {
	static unsigned short int i;

	T **matrix = new T*[rows];
	matrix[0] = new T[rows * cols];
	for(i = 1; i < rows; i++)
		matrix[i] = matrix[i - 1] + cols;

	return matrix;
}*/

float **dynMatrix(const unsigned short int rows, const unsigned short int cols) {
	static unsigned short int i;

	float **matrix = new float*[rows];
	matrix[0] = new float[rows * cols];
	for(i = 1; i < rows; i++)
		matrix[i] = matrix[i - 1] + cols;

	return matrix;
}
