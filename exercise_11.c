  //exercise_11
#include <stdio.h>

int main(int argc, char *argv[])
{
 // go through each string in argv
	int i=0;
	while( i <argc)  {
        printf("arg %d: %s \n", i, argv[i]);
        i++;
        }
        // let's make our own array of strings 
        char * states[] = {
        "California", "Oregon", "Washington", "Texas"
        };
        int num_states= 4;
        i=0; // watch for this //
         while(i < num_states)
        {
        printf("state %d: %s\n", i, states[i]);
        i++;
        }
        return 0;
}

//*****EXTRA CREDITS*****//

/*
Make these loops count backward by using i-- to start at argc and count down to 0.
You may have to do some math to make the array indexes work right.
- i = argc;
while (--i >= 0)
    printf("arg %d: %s\n", i, argv[i]);

i = 4;
while (--i >= 0)
    printf("state %d: %s\n", i, states[i]);
Research if you've really copied these strings. The answer may surprise and confuse you though.
- well I think you can't copy




*/

