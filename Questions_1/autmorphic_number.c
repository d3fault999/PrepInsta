#include <stdio.h>
#include <math.h>
int main()
{
    int num = 12;
    int sqr;
    int temp;
    int temp1;

    sqr = pow(num, 2);

    temp = num % 10;
    temp1 = sqr % 10;

    if (temp == temp1)
    {
        printf("%d is a Automorphic Number", num);
    }
    else
    {
        printf("%d is not a Automorphic Number", num);
        
    }
}