# cmagic

### NEW: templated dynamic matrix generator
usage:
type ``**``matrix = dynMatrix<type>(unsigned int, unsigned int);

There is no factorial function in standard c/c++. One must provide an own implementation for every project in need of it. Instead, simply include these files in your project.

Commonly loops include terms using the factorial of the iterator. It is highly inefficient to calculate the factorial on every turn, so a function staticFac is introduced with a static variable containing the last computed factorial.
In case the function is used in a new loop, all static variables will be reset.

For testing type *make test* in a console (assuming the provided testfile, makefile and standard cmath are available).

Usage can be seen in the testfile.
