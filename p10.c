// Write a program to print a string in reverse using a pointer

#include<stdio.h>
#include<string.h>
void printRev(char *p,int len)
{
    printf("reverse of the given array is : ");
    for(len=len-1;len>=0;len--)
    printf("%c",*(p+len));
    printf("\n");
}

void main()
{
    char string[20];
    printf("enter your string : ");
    fgets(string,20,stdin);
    int len = strlen(string);    
    printRev(string,len);
}