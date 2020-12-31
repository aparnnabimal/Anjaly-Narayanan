#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
clrscr();
printf("Enter the elements of first matrix \n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of second matrix \n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("The sum of 2 matrixs is");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d",c[i][j]);
}
}
getch();
}