// In C++ files doesn't exist: in Java the class name has to be tied to the filename and your folder hierrarchy has to be tied to your package. Java expects certain files to exist.
// In C++ files don't exist: a file is just a way to feed the compiler with source code. You have to just say which type of file it is and the compiler will treat it: as header file (.h), c++ file (.cpp) or c file (.c).

// The LINKER takes all the object files and put them in just one file

// BUILDING is divided in COMPILING and LINKING



#define REMO stupido // it search the word REMO and replace it with  the word stupido
#define INTEGER int

#include <iostream>


// #include <remo.h>
// what includes does is to open the file remo.h, copy its content and paste it right at the place of #include <remo.h>

// you can also ask the compiler to produce a preprocess file: in htat case the file is gonna have the esxtention .i and you can look at it. In the .i files you can see the replacement of #include <remo.h> with the actual body of the file remo.h
// But if you produce a preprocessing file, it won't compile, it won't produce an object file, so disable it to build your file

// include find a file called iostream, it takes the content of the iostream file and paste it here.
// include is a header
// we include iostream because we need the declaration of the function 'cin' and 'cout'

// # pre-process statement they happen before the actual compilation 

//  #if preprocessor statement usato per escludere o includere qualcosa nella compilazione viene definito in questo modo:
//
//#if 1
//
//#endif


//header files don't get compiled at all, they get included in a cpp file
// only cpp files get compiled, every cpp file is get compiled individually and is compiled in an object file. When all the cpp files are compiled in obect files then we need the LINKER to link all these objects together, glue them and create a .exe file

void Log(const char* message);
// we are declaring that a function called 'Log' exist and so we are telling the compiler that the function Log exist somewhere. The compiler doesn't know if the file exists for real. The Linker is going to find the Log function and link it to the file where the function is used. If the Linker doesn't find the file: LINKER ERROR
// In this case I can just put: void Log(const char* message); -but is better to specify the name of the input than just the type

//declaration and definition: declaration says that a function exists, definition says what that function is, the definition id the body of the function: declaration is the definition of the function without the body
// I didi the declaration od Log now it can be compiled and to be built is the LINKER that have to find among all the files I compiled the function Log and put it together in a unique file. If the LINKER is not able to find the definition of the Log function Ive a LINKER Error

int main() {
	// is the entry point. The pc is going to start running the code present in this function
	// the main function returns an Integer but the main function is a special function because you can return nothing: in that case if you return nothing it actually return 0

	std::cout << "Hello World!" << std::endl;
	// we put an endline to "Hello World" and then we put "Hello World" in cout that prints it out in the console


    Log("Hello, World!");
    std::cin.get(); // this function waits until we press ENTER so the console doesn't close immediatly
    
}


// cin = CONSOLE IN
// cout = CONSOLE OUT

// STATIC FUNCTION
// static int Multiply (int a, int b) it means that this fuction is only available for this translation unit, only in this .cpp file that contains Multiply and this function can never be called by other files

// LINKER ERROR: functions or symbols duplicates. The LINKER doesn't know what to link 

// In the header files I can't have the definition (body) of a function but only its declaration: this is because include paste all the content of the header file at its place: so if I put the #include"header.h" in many files Im defining the same function in all of these files and so I've a LINKER ERROR for duplicates of functions. A possible stategy to not incurr in this problem is to transofrm that function in STATIC. So the function is available only on that internal file and won't be visible to other objects files. Or I can transform the function in INLINE void Log(...) Here INLINE replace with the body of the function. The best way is to define the function in one translation unit and leave only the declaration in the header file.

