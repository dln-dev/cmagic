#include "cmagic.h"

double factorial(unsigned short int n) {
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

// n = 0 not supported! Implement first round manually.
// Reset mechanism won't work after using this only once.
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
}

// the following is necessary for the compiler to instantiate the templates
// unfortunately, calling a function outside main is complicated and ugly, so
// implementing templates in header is preferred here
short int satrix = dynMatrix<short int>(3,3);
int ** iatrix = dynMatrix<int>(3,3);
float ** fatrix = dynMatrix<float>(3,3);
double ** datrix = dynMatrix<double>(3,3);
*/

std::chrono::high_resolution_clock::time_point timestamp() {
	return std::chrono::high_resolution_clock::now();
}

/*template <typename T>
auto duration(std::chrono::high_resolution_clock::time_point t1, std::chrono::high_resolution_clock::time_point t2) {
	return std::chrono::duration_cast<T>(t2-t1).count();
}*/
