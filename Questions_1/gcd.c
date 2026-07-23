#include <stdio.h>
int main()
{
int num1 = 40;
int num2 = 24;
int rem1;
int rem2;
int var = 1;

/*code for greatest common divisior both numbers here their common highest divisior which 
will give remainder 0 for both*/
 
 for(int i =1;  i<=num2; i++){

rem1 = num2 %i;
rem2 = num1 % i;

if (rem1 == 0 && rem2 == 0 ){

var = i;

}

 }
 
 printf("%d",var);
 
 return 0;
}

