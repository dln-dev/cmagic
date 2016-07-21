# cmagic

### NEW: measure time with timestamp() and duration()
These are wrappers for std::chrono functions and types. 

Documentation is [here](https://dln-dev.github.io/cmagic/html/index.html "cmagic Documenation").

There is no factorial function in standard c/c++. One must provide an own implementation for every project in need of it. Instead, simply include these files in your project.

Commonly loops include terms using the factorial of the iterator. It is highly inefficient to calculate the factorial on every turn, so a function staticFac is introduced with a static variable containing the last computed factorial.
In case the function is used in a new loop, all static variables will be reset.

Need dynamically generated matrices? A template is provided making this as easy as calling a function.

Functions *timestamp()* and *duration()* are provided for accurately measuring processing times. This currently needs the C++11 flag.

For testing type **make test** in a console (assuming the provided testfile, makefile and standard cmath are available).

## Usage: 

#### factorial:

```C++
float E = 1;
for(unsigned short int i = 1; i < 10; i++)
	E += 1/factorial(i);
```

#### staticFac:

```C++
float E = 1;
for(unsigned short int i = 1; i < 10; i++)
	E += 1/staticFac(i);
```

#### dynMatrix:

```C++
double **matrix = dynMatrix<double>(10, 10);
```

#### duration:

```C++
tpoint t1 = timestamp();
calculation();
tpoint t2 = timestamp();
cout << "This lasted " << duration<chrono::milliseconds>(t1, t2) << " milliseconds" << endl;
```
