/*
    [#] means PreProcessor Statement :
	    > Processing my Source code before compiler to computer by some of Preprocessor Directive
	      some of instruction depends on which directive i call for preprocess my code.
		   
	Preprocessor Directive List :
	[1] [include]
	                using to include <header> or "file"
		             > Between angle brackets <> This is used to include headers 
					    provided by the implementation that designated by compiler/IDE
						header is used to include standard library files.
				     > between double quotation "" is for header files that programmer defines. 
					   If a programmer has written them own header file, 
					   then write the header file name in quotes or the Preprocessor
					   search in the currect folder or defined folder 
					   this method is normally used to include programmer defined header.
	[2] [define] 
	               Used to define a Macro
					Macro is :
					          > its provide a way to create symbolic constants and code snippets 
							    that can be reused throughout a program. 
							  > its processed by preprocessor.
							  > Macros are pieces of code in a program that is given some name.
							    Whenever this name is encountered by the compiler,
							    the compiler replaces the name with the actual piece of code.
							    The ‘#define’ directive is used to define a macro.
    [3] [undef]
	              Used to undefine a Macro

    [4] [ifdef]
				  Used to include a section of code if a certain macro is defined by #define

	[5] [ifndef]
	              Used to include a section of code if a certain macro is not defined by #define

	[6] [if]
	              Check for the specified condition

	[6] [else]
	              Alternate code that executes when #if fails

	[7] [error]
	              it stops program compilation

	[8] [warring]
	              it continues the compilation prosses by displaying warning messages
				  in the console window.

	[8] [region] [endregion]
	              They increase the readbility of code sections
				  using expansion and callapse features

there is more directive type we will learn more in future

*/
#include <iostream>
#define LIMIT 90


// this is my Source Code 
int main() // entry point the main function
{
	int i = 28;
	// our C++ executing the coding line by line
	std::cout << " i am here ";
	std::cout << " iam dragon ";// here that first line and this line marged together
	std::cout << "\niam here\n"; 
	// "\n" back slash + n means that start next code in new line dont marage it 
	std::cout << "IAM HERE" << std::endl; // std::endl -> means to start the next code in new line
	std::cout << "hehe" << std::endl;
	std::cout << "IAM DRAGON" << std::endl;
	std::cout << LIMIT << std::endl;
	

	return 0; // because our function type data is "int" it should return number only
	// we will know in advanced level 
}