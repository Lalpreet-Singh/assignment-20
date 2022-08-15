#include<stdio.h>
void inputarr(int *ptr, int size);
void display(int *ptr, int size);
void sort(int *ptr, int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }
}
void main()
{
    int len;
    printf(" enter the length of the array :");
    scanf("%d",&len);
    int arr[len];
    inputarr(arr,len);
    display(arr,len);
    sort(arr,len);
    display(arr,len);
}
void inputarr(int *ptr, int size)
{
    int i;
    printf("enter the integers in unsorted manner :\n");
    for(i=0;i<size;i++)
    scanf("%d",(ptr+i));    
}

void display(int *ptr, int size)
{
    printf("our array is :\n");
    int i;
    for(i=0;i<size;i++)
    printf("%d ",*(ptr+i));
    printf("\n");
}