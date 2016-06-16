# cmagic

The absence of a factorial function in standard c/c++ bothers me. I have to include an own implementation for every project I need it in.

Commonly loops include terms using the factorial of the iterator. It is highly inefficient to calculate the factorial on every turn, so a function staticFac is introduced with a static variable containing the last computed factorial.
In case the function is used in a new loop, all static variables will be reset.
