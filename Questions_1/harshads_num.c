#include <stdio.h>
int main()
{
    int num = 12;
    int sum = 0;
    int rev,og_num;

    og_num = num;

while (num >0)
{

  rev = num % 10;
  num = num /10;
    sum = sum + rev;
     
}

if (og_num % sum == 0)
{
    printf("Harshad number");
}
else
{
    printf("Not a Harshad number");
}
}









