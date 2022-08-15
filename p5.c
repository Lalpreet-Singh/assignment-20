// Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int getMax(int *p1, int *p2)
{
    int max;
    if((*p1)>(*p2))
    max = (*p1);
    else 
    max = (*p2);


}
void main()
{
    int num1,num2;
    printf("enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    printf("maximum among these two is :%d\n",getMax(&num1,&num2));
}