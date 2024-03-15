// Write a C program to get the largest element of an array using recursion.

#include<stdio.h>
void largest(int*array,int start,int end,int*max)
{
    if(start<=end) 
    {    
        if(array[start]>*max) *max=array[start];
        start++;
        largest(array,start,end,max);
    }
}

void main()
{
    int arr[10]={0,1,2,3,4,5,6,72,8,9};
    int max=arr[0];
    largest(arr,0,9,&max);    
    printf(" the maximum in array is %d",max);
}