// 6. Write a C program to check whether a substring is present in a string or
// not.
// Example: Enter a string: This is a test string.
// Enter the substring to be searched : test
// Output: The substring exists in the string
#include<stdio.h>
#include<string.h>
void main()
{
    char string[1000];
    printf("\nEnter the string : ");
    gets(string);
    char substring[1000];
    printf("\nEnter the substring : ");
    gets(substring);

    int found=0;
    
    for(int i=0;i<strlen(string)-strlen(substring)+1;i++)
        if(strncmp(i+string,substring,strlen(substring))==0) 
            found=1;
    
    if(found==0) printf("\nNo");
    else printf("\nYes");
}