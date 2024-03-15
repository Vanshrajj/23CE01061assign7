// Write a C program to remove all the characters except alphabets in a
// string.
// Example: Input: P2rog$5ra^ m./
// Output: Program
#include<stdio.h>
#include<string.h>

void change(char*array,int start,int end)
{
    for(int i=start;i<end;i++) array[i]=array[i+1];
    array[end]='\0';
}
void main()
{
    char str[1000];
    // char stringcpy[1000]={'\0'};
    printf("\nEnter a string : ");
    gets(str);
    // printf("\n%s",str);
    // int k=0;
    //directly printing 
    // for(int i=0;i<strlen(str);i++) 
    //     if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
    //         printf("%c",str[i]);

    //storing in a new array
    // for(int i=0;i<strlen(str);i++) 
    //     if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
    //         stringcpy[k++]=str[i];

    // printf("\n%s",stringcpy);

    //modifying the same array
    int len=strlen(str);
    
    for(int i=0;i<len;i++)
        if(!((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) || str[i]==0)) 
            change(str,i--,len-1);

    printf("\n%s",str);
    
}