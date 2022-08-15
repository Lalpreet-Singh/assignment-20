// Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
void inputarr(int *ptr, int size)
{
    int i;
    printf("enter the integers in the array :\n");
    for(i=0;i<size;i++)
    scanf("%d",(ptr+i));    
}

int sumArry(int *p, int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    sum = sum + *(p+i);
    return sum;
}

void main()
{
    int len;
    printf("enter the length array : ");
    scanf("%d",&len);
    int arr[len];
    inputarr(arr,len);
    printf("sum of all the elements of this array is : %d\n",sumArry(arr,len));
}