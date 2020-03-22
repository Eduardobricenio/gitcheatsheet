#include <stdio.h> // libraries are added
int main(int argc, char *argv[]){
	int i = 0;
	// go through each string in argv
	// why am I skipping argv[0]?
	for(i = 1; i < argc; i++) {
	printf("arg %d: %s\n", i, argv[i]);
	}
	// let's make our own array of strings
	char *states[] = { 
	"California",
	"Oregon",
	"Washington", 
	"Texas"};
	int num_states = 4;
	for(i = 0; i < num_states; i++) {
	printf("state %d: %s\n", i, states[i]);}
	return 0;
	}



 //*****EXTRA CREDITS*****//
 
/*
Look up how to use the ',' (comma) character to separate multiple statements in the parts of the for-loop , 
but between the ';' (semicolon) characters
-commas must be used to separate each argument
Read what a NULL is and try to use it in one of the elements of the states array to see what it'll print.
-NULL ends the process

 See if you can assign an element from the states array to the argv array before printing both. Try the inverse
-I think it is not possible because the assigned values are elsewhere.
 */
