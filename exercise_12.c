//exercise 12
#include <stdio.h> //corresponding libraries are added
int main (int argc, char *argv[]) // universal variables
{
	int i = 0;

	if(argc == 1){ 
		printf("You only have one argument. You suck.\n");
	}else if(argc > 1 && argc < 4){
		printf("Here's your arguments:\n");

	for(i=0;i < argc; i++){
		printf("%s ", argv[i]);
	}
	printf("\n");
	}else { 
		printf("You have too many arguments. You suck.\n");
	}
	return 0; 
}
		//*****EXTRA CREDITS*****//

/*

You were briefly introduced to && , which does an "and" comparison, 
so go research online the different "boolean operators"
-Operator && and
-Operator || or 
-Operator ! Not

Write a few more test cases for this program to see what you can come up with.
-Boolean operators are the words "AND", "OR" and "NOT". 
When used in library databases (typed between your keywords) they can make each search more precise - and save you time!
AND narrows a search by telling the database that ALL keywords used must be found in an article in order for it to appear in your results list. 

Is the first test really saying the right thing? To you the "first argument" isn't the same first argument a user entered. Fix i
-for me it is not the same because we are not placing the same arguments, so the term is the same.

*/


