#include<stdio.h>
#include<conio.h>
void accept(int a[10],int n);
void display(int a[10],int n);
void insrtion_sort(int a[10],int n);

void main()
{
 int n,a[10];
printf("\n enter how many array elements:);
scanf("%d",&n);
accept(a,n);
print("unsorted list ");
display(a,n);
insert_sort(a,n);




}
void accept(int a[10],int n)
{
int i;
printf("enter array elemensts:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
}
void display(int a[10],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("\n %d",&a[i]);


}
void insertion_sort(int a[10],int n)// passing array no. of elements
{
int i,j,k,temp;
for(i=0;i<n;i++)    //unsorted element are less all elements compare to reverse order
{
k=a[i];
for(j=i-1;j>=0&&a[j]>k;j--) // sorted elements higher
{
a[j+1]=a[j];


}
a[j+1]=k;
display(a,n);

}
}
}