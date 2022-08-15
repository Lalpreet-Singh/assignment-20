#include<stdio.h>
int swapString(char *p,char *q)
{
    int i;
    char temp;
    for(i=0;*(p+i)&&*(q+i);i++)
    {
        temp = *(p+i);
        *(p+i) = *(q+i);
        *(q+i) = temp ;
    } 
}
void main()
{
    char str1[20],str2[20];
    printf("enter 1st string: ");
    fgets(str1,20,stdin);
    
    printf("enter 2st string: ");
    fgets(str2,20,stdin);

    swapString(str1,str2);
    
    printf("after swaping\n");
    printf("1st string is : %s",str1);
    printf("2nd string is : %s",str2);

}