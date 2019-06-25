#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j,k=1;
clrscr();
printf("Enter the limit");
scanf("%d",&a);
for( i=1;i<=a;i++)
{
 for(j=1;j<=i;j++)
 {
  printf("%d ",k);
  k++;
 }
printf("\n");
}
getch();
}
// 4
1
2 3
4 5 6
7 8 9 10//
