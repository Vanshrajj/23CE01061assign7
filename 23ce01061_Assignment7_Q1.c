// Write a C program to find the frequency of a given character in a string.
// Example: Enter a string: Hello World
// Enter a character: l
// Frequency of l is: 3
#include<stdio.h>
#include<string.h>
void main()
{
    //inputting string
    char str[1000];
    printf("Enter the string : ");
    gets(str);

    //storing frequency of character corres to their ascii
    int characters[256]={0};
    for(int i=0;i<strlen(str);i++) characters[str[i]]++;

    //asking for a char
    char user[1];
    printf("\nEnter a character for frequency = ");
    fflush(stdin);
    scanf("%c",&user[1]);

    printf("%d",characters[user[1]]);

}