/*
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>
int main()
{

int a;
printf("Enter the number of late days : ");
scanf("%d", &a);

if(a<=5)
{
printf("Fine =  ₹ %d\n", 2*a);
}

else if(a<=10)
{
printf("Fine =  ₹ %d\n", 10+(4*(a-5)));
}

else if(a<=30)
{
printf("Fine =  ₹ %d\n", 30+(6*(a-10)));
}

else 
{
printf("Membership Cancelled\n");
}

return 0;
}
