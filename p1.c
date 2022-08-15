#include<stdio.h>
int swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}
void main()
{
    int a,b;
    printf("enter two numbers to swap:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("value of a = %d\nvalue of b = %d",a,b);
}