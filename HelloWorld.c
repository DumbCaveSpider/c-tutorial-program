/*
This is a Hello World program
It will only display the sentence "Hello World"

ICT159
Date: 2024/03/11
*/

/* This is where printf is located. This is important when creating a program */\
# include <stdio.h> 
/* 
This is a Header of file as it has .h on it 
#include brings the library inside the <> to the program
*/

int main() {	
/*
Between the {} is a block of code that int main() is and the () is the function of the code
*/

	printf("Hello World!\n"  ); 
	/* 
	printf is a command module that is included in the C library from <stuio.h>, it needs to tell where the file is it
	\n creates a new line in the printf 
	*/


	return 0; /* return 0 tells the computer that the execution is done */
	
	
}