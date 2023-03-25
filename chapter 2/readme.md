#Work for chapter 2


```
printf ("to C or not to C: that is the question.\n")
```
Compiling and linking
- preprocessing - program given to preprocessor, obeys commands that begin with #. 
- compiling - modified program goes to compiler, translates into object code. 
- linking - combines object code with additional code to give complete program
	- additional code includes library functions (printf)

simple C programs always have a form:
```
directives
int main (void)
{
statements
}
```
they always have:
- directives - editing commands that modify the program pre-compilation
- functions - blocks of executable code, ex. main
- statements - commands to preform when program run


Directives:
- before program is run, modified by preprocessor
- commands intended for preprocessor called directives
- most simple directive is :
```
#include <stdio.h>
```
- this states that info from <stdio.h> is to be included into program before compiled
- <stdio.h> has info abt C's standard I/O library
- directives always start with a "#"

Functions
- building blocks from which programs are constructed
- two categories of functions
	- written by programmer
	- provided by C implementation (library functions)
- C programs made of many functions, but "main" function the only nececcary
	- called automatically when pgrm run
```
int main (void)
{
    printf("to C or not to C: that is the question.\n")
    return 0
}
```
- int - shows that it returns an integer value
- void - indicates that main has no arguments
```
return 0;
```
- causes main to terminate
- indicates main returns value of 0

Statements
- command to be executed when program runs
- asking a program to do its assigned task is known as calling the function
```
printf("to C or not to C: that is the question\n");
```
- calls printf to display function on screen
- C requires statements end wioth semicolon
	- shows where statement ends

Comments
- important to show documentation for code
```
/* marks begining of comment
marks end of comment */

/*this is a comment*/

//this is also a comment
```

Variables and assignment
	
	Types
	- each variable has a type
		- specifies the kind of data held
	- affects how var stored, operations preformed on var
	- type of numeric var determines min and max held
	- determines if digits allowed after decimal

	Declarations
	- var must be declared before use
	- to declare, specify type and name
	- 
```
int height; // declares integer with name height
float profit; // declares float with name profit

int height, length, width, volume; // declares many integers
float profit, loss // declares many floats
```
	- declarations must preceed statements
```
int main (void)
{
declarations
statements
}
```
	
	Assignment
	- var can be given value through assignment
```
height = 8;
length = 12;
width = 10;
```
	- must be declared before assigned a value
```
int height;
height = 8

//WRONG
height = 8
int height 
```


Printing value of Variable
```
printf("Height: %d\n", height);
```
- %d is a placeholder for where value of height goes
- %d only words for int, use %f for float
- %f displays 6 digit after decimal point
