#include <stdio.h>
#include <math.h>
int main()
{
    int num = 144;
    float sqrt_num;

    sqrt_num = pow(num, 0.5);

    if ( sqrt_num == (int)sqrt_num)
    {
        printf("%d is a perfect square", num);
    }
    else
    {
        printf("%d is not a perfect square", num);
    }
}