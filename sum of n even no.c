#include<stdio.h>
int main()
{
int n;
int i= 0;
int d=0;
printf("Enter the number of even no's : ");
scanf("%d",&n);

while(i<=n){
d = d + 2*i;
i++;
}
printf("The sum of 1st %d even no is : %d\n",n,d);
return 0;
}
