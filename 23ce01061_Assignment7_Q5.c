// Write a C program to check whether a given string is palindrome or not
// without using string functions.
// Example: Input: level
// Output: The string is a palindrome
#include<stdio.h>
void main()
{
    char word[1000];
    printf("\nEnter the word : ");
    gets(word);

    //finding the length of the string
    int len=0,counter=0;
    for(int i=0;word[i]!='\0';i++) 
        len++;

    for(int i=0;i<len/2;i++) 
        if(word[i]==word[len-1-i]) 
            counter++;
            
    if(counter==len/2) printf("\nYes it is a palindrome");
    else printf("\nIt is not a palindrome");

}