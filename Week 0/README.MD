# Abertay Programming Society: Week 0 - Demos

These are the demo's from our week 0 meeting (Tuesday 18th Sept, 2018). Most are written in C++, one is provided in python (3).

### What was covered

- Exception handling in C++ and Python
- Input Validation in C++, and how to avoid 'cin weirdness'.

### Exception handling in C++ and Python

Exception handling can be really really useful, C++ samples are provided as .cpp files, Python samples are provided as .py files, both only use standard library and language features.

>Why should I use exception handling?

*Blatantly ripped from IsoCpp:*
>"Using exceptions for error handling makes your code simpler, cleaner, and less likely to miss errors. But what’s wrong with “good old if-statements”? The basic answer is: Using those, your error handling and your normal code are closely intertwined. That way, your code gets messy and it becomes hard to ensure that you have dealt with all errors (think “spaghetti code” or a “rat’s nest of tests”)."

If you wish to read more on the specifics, https://isocpp.org/wiki/faq/exceptions provides a really great FAQ on when, where and why to use exceptions!
Most of the points apply to python, the only real differences are in the language syntax.

### Exception Handling Demos
Demo 0 showcases a divide function without any exception handling (or other limitations) [C++]
- Divide by 0 is allowed, and will crash the application
- Error message will *probably* not provide anything meaningful
- Divide by 0, while the easiest to understand, doesn't showcase standard exception types take a look at this link for some examples https://en.cppreference.com/w/cpp/error/exception

Demo 1 showcases the same function, but with exception handling [C++]
- divide_numbers will catch an exception and cause the program to print the "ERROR CODE 11" message.
- A basic example of how you could implement exception handling

Demo 2 Showcases a similar function that can pass an error back to its caller [C++]
- main will catch the exception thrown by divide_numbers and cause the program to print the "ERROR CODE 11" message.
- A basic example of how you could implement exception handling

Demo Bonus 1 provides a real world example of IP verification using python [Py]
- This example was taken from Andrew's (2018/19 President's) 3rd year group project https://github.com/AR-Calder/usbskeletonkey
- Same concepts as before, but using the socket library in python (3).

Demo Bonus 2 showcases one of the ways you can create your own exception messages, and add custom exceptions to a class you create.
- This example uses inheritance to extend the functionality of std::runtime_error allowing us to create custom error messages
- Not the most beginner friendly (sorry!)
    - The prefix std:: is effectively 'using namespace std' but per function
    - A Class is an object that contains other objects, that can have public and private access to its member functions and objects.
    - 'class someclass : otherclass' effectively means *someclass* extends the functionality of *otherclass*
- Same concepts as before, but way cooler ;)

### Input validation Demo
Due to the way Cin operates, the data provided to it can be wrongfully accepted (**e.g. an int accepts *1asdf* as *11*, then *asdf* is passed to the next cin call**)
This is especially annoying in 1st and 2nd year coursework as much of it requires the use of cin. Input validation methods aren't perfect, but are a lot better than relying on cin working as expected.

Demo 0 showcases two similar methods of requesting input, one using templated types and simpler variant solely for integers.
- only numeric types can be somewhat validated in this way, this method provides more of a 'safeguard' against other 'bad' input.
- still useful as it effectively scrubs away the 'asdf' part mentioned earlier - which would otherwise lead to some confusing errors!
