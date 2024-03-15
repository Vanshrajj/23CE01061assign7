// Write a C program to reverse a string using recursion.
// Example: Input: Hello World
// Output: dlroW olleH
#include<stdio.h>
#include<string.h>
void swap(char*a,char*b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}

void rev(char*str,int start,int end)
{
    if(start<end)
    {
        swap(&str[start++],&str[end--]);
        rev(str,start,end);
    }
}

void main()
{
    char str[1000];
    printf("\nEnter string : ");
    gets(str);
    rev(str,0,strlen(str)-1);
    printf("\n%s",str);
}