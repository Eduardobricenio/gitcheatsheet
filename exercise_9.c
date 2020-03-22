
#include <stdio.h> //the library is attached

int main(int argc, char *argv[]) //universal variable 
{
	int numbers[4] = {0}; // localvariable
	char name[4] = {'a'}; 
	// first, print them out raw 

	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]); //print numbers 
 	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	printf("name: %s\n", name);
 	// setup the numbers 
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	// setup the name
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	// then print them out initialized
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	// print the name like a string    printf("name: %s\n", name);
	// another way to use name
	char *another = "Zed";
	printf("another: %s\n", another);
	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
	return 0;
}

//*****EXTRA CREDIT*****//

/* 
What kind of compiler warnings did you get? 
-no i didn't get any kind of warning

How many other ways can you print this out?
-You can print in various ways, with printf, gets and also using atoi in the character array.

If an array of characters is 4 bytes long, and an integer is 4 bytes long, 
then can you treat the whole name array like it's just an integer? 
How might you accomplish this crazy hack?

-well  i use the first element in the array to represent the first 8 bits, and the 2 element for the second 8 bits 
*/

