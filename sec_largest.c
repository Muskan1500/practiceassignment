#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,size,first_largest,second_largest;
printf("enter the size of an array\n");
scanf("%d",&size);
printf(" enter the elements of the array\n");
for(i=0; i<size; i++)
scanf("%d\n",&a[i]);
{
    if(a[0]>a[1])
    {
        first_largest = a[0];
        second_largest = a[1];
    }
    else
    {
        first_largest = a[1];
        second_largest = a[0];
    }
}  
for(i=2 ; i<size; i++)
{
    if(first_largest<a[i])
    {
        second_largest = first_largest;
        first_largest = a[i];
    }
    else if (second_largest < a[i])
    {
        second_largest = a[i];
    }
}
printf("first_largest %d\n",first_largest);
printf("second_largest %d\n",second_largest);
getch();
} 