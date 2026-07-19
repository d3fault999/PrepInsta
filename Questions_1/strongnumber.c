#include <stdio.h>

int main()
{
int number = 145;
int temp=number;
int product=1;
int sum=0;
while(number!=0)
{
int remainder = number % 10;
for(int i=1;i<=remainder;i++)
{
product=product*i;
}
sum=sum+product;
product=1;
number =number/10;
}

if(sum==temp)
{
printf("strong number ");
}
else{
printf("Weak numebr");
}
}