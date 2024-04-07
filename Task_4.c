/*
*******************************************************************************************************
                                        Task_4_description
*******************************************************************************************************
Consider the following C program and answer the following questions:
1. Describe what the compute_array() function in the code does?
2. Is the program memory safe? If not, how could the program be made memory safe while retaining its
original functionality?
*******************************************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* compute_array(char* string_combined) 
{
    int n = strlen(string_combined);
    int* array_1 = (int*)malloc(sizeof(int)*n);
    array_1[0] = 0;
    for (int i = 1; i < n; i++) 
    {
        array_1[i] = 0;
       
        while(((i + array_1[i]) < n) && (string_combined[array_1[i]] == string_combined[i + array_1[i]])) 
        {
            (array_1[i])++;
        }
    }
    return array_1;
}


int main()
{
    char* string_1 = "abc";
    char* separator = "$";
    char* string_2 = "abcacbabcabddbabcaxabc";
   
    char string_combined[200];
    strcpy(string_combined, string_1);
    strcat(string_combined, separator);
    strcat(string_combined, string_2);
    int* array_1 = compute_array(string_combined);
    int n = strlen(string_combined);
    int m = strlen(string_1);
   
    for (int i = 0; i < n; i++) 
    {
        if (array_1[i] == m) 
        {
            printf("%d ", i - m - 1);
        }
    }
    return 0;
}