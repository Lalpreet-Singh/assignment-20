#include<stdio.h>
void swap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
void inputArr(int *ptr, int size)
{
    int i;
    printf("enter the integers :\n");
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

void main()
{
    int x = 45;
    int *p;//this means that p is a special variable which used to store address 
    p = &x;//this means p is pointing to x
    printf("%ld\n",sizeof(p));// for my system a pointer takes 8 bytes storage in the memory
    printf("%p\n",p);//this will print the address which p is storing
    printf("%p\n",&x);
    printf("%d\n",*p);//*p is also equal to x; * is used for derefferencing
//  extended concept of pointers
    int **q,***r;
    q = &p;
    r = &q;
    printf("%d  %d  %d  %d\n",x,*p,**q,***r);
    printf("%p  %p  %p  %p\n",&x,p,*q,*r);
    // p = &p;  will throw an error 
    // printf("%p, %p",p,&p);
//  pointers arithmetics
    int y = 5;
    int *s;
    s = &y;
    int add = *s + *p;
    printf("adding using pointers : %d\n",add);
    printf("address of variable to which p is pointing is %p and address of p+1, p+2 is %p, %p\n",p,p+1,p+2);
//  swaping two values using pointers(call by reference)
    swap(p,s);  // calling swap function by passing address as argument
    printf("x= %d, y= %d\n",x,y);

//  pointers and array 
    int a[5];
    inputArr(a,5);
    display(a,5);
//  array of pointers 
    int *ptr[4];
    int b[3]={1,2,3};
    
    int c[4]={4,6,5,7};
    
    int d[2]={8,9};
    
    ptr[0]=a;
    ptr[1]=b;
    ptr[2]=c;
    ptr[3]=d;
    printf("value of element ptr[1][3] = %d\n",ptr[1][3]);

//  pointer to array
    int u[5][4];
    int (*m)[4];
    m = u;
    printf("enter value for u[2][2] ");
    scanf("%d", (m[2]+2));
    printf("value stored in u[2][2] is : %d\n",u[2][2]);
}