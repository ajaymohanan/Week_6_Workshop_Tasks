/*
*******************************************************************************************************
                                        Task_1_description
*******************************************************************************************************
The main() function of the following C program calls a user-defined function filter_ascending() that 
take a pointer to char (char*) as input argument and then filters the characters in the string in 
ascending order by deleting the characters that do not meet this requirement. 

For instance, if the string "qersatbcuvf" is provided as input argument to the function, the string 
after exiting the function should be: "qrstuv".

1. The definition of the function filter_ascending() contains two errors. You must correct these 
errors and verify that the function provides the correct output. In the process of correcting the 
function definition, you are only allowed to edit the existing lines of code in the function and 
therefore, not allowed add any new lines of code for this purpose.

2. Prepare the C file Task_1.c for system testing by allowing it to receive the string to be filtered 
as a command line argument. Once the generated executable is called with the required command line 
argument, only the filtered string must be printed onto the terminal.
*******************************************************************************************************
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void filter_ascending(char* string_1);

int main()
{
    char string_1[20];
    printf("Enter the string: ");
    scanf("%s", string_1);
    filter_ascending(string_1);
    printf("The modified string is: \n");
    printf("%s\n", string_1);
	return 0;
}

void filter_ascending(char* string_1)
{
    for (int i = 1; i < strlen(string_1); i++)
    {
        for (int j = 0; string_1[j+2] != '\0'; j++)
        {
            if (string_1[j] > string_1[j+1])
            {
                for (int k = 0; string_1[k] != '\0'; k++)
                {
                    string_1[k] = string_1[k+1];
                }
            }
        }
    }
}
