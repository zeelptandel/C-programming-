#include<stdio.h>
int main()
{
int gross_salary ,allowances , deductions , net_salary ;
scanf("%d",&gross_salary);
if(gross_salary>10000)
{
allowances = gross_salary*0.1;
deductions= gross_salary*0.03;
}
else if(gross_salary>5000)
{
allowances = gross_salary*0.07;
deductions= gross_salary*0.02;
}
net_salary = gross_salary + allowances - deductions ;
printf("%d is the net salary",net_salary);
return 0;
}
