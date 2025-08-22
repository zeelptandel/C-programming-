#include<stdio.h>
int main()
{
int gross_sales , net_sales , discount ;
scanf("%d",&gross_sales);
if(gross_sales>20000)
discount = gross_sales* 0.15;
else if(gross_sales>10000)
discount = gross_sales* 0.1;
else
discount = gross_sales* 0.05;

net_sales = gross_sales - discount;
printf("%d is the net sale",net_sales);
return 0;
}
