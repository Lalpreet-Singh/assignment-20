// Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int length(char *p)
{
    int i;
    for(i=0;*(p+i);i++);
    return i;
}
void main()
{
    char string[20];
    printf("enter a string : ");
    fgets(string,20,stdin);
    printf("length of this string is : %d", length(string));
}