// Write a program to count the number of vowels and consonants in a string using a
// pointer.
#include<stdio.h>
void cntVowCon(char *p){
    int i,vow=0,consonants=0;
    for(i=0;*(p+i);i++)
    {
        if((*(p+i)>=65&&*(p+i)<=90)||(*(p+i)>=97&&*(p+i)<=122))
        {
            if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
            vow++;
            else
            consonants++;
        }
    }
    printf("this string has %d vowels and %d consonents \n",vow,consonants);
}
void main()
{
    char string[20];
    printf("enter a string : ");
    fgets(string,20,stdin);
    cntVowCon(string);
}