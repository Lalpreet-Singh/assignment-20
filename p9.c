// Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void printRev(int *p,int len)
{
    printf("reverse of the given array is : ");
    for(len=len-1;len>=0;len--)
    printf("%d  ",*(p+len));
    printf("\n");
}
void inputarr(int *ptr, int size)
{
    int i;
    printf("enter the integers in the array :\n");
    for(i=0;i<size;i++)
    scanf("%d",(ptr+i));    
}
void main()
{
    int len;
    printf("enter the length of the array ");
    scanf("%d",&len);
    int arr[len];
    inputarr(arr,len);
    printRev(arr,len);
}