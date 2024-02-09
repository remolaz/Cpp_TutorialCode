/*

HOW to create a STATIC library and how you can use that library in your code.
In particular we have create the code of the static library and we include it in the application
In this way when the program compiles the application ado the surce code of the library is compiled

VERY SIMPLE EXAMPLE

In the include better use "" or <>
Better use "" when you are including your libraries and not C++ standard libraries

<> they search the file in the Compiler Including path
"" are more generic and they search for a path where to find the headre file

IMPORTANT: use the Add reference to add a static library to the project

Done thatm when the executable is build, it doesn't need more libraries to work with because all the
static libraries code has been compiled into the executable. In fact when you compiled the code, at first 
you compile the library and then you principal application

*/
