#include <stdio.h>
int main()
{
    int num = 10;
    int start = 0;
    int end = 1;
    int next;

    for (int i = 0; i<num; i++){
  
    printf("%d ", start);
    next = start + end;
    start = end;
    end = next;

    }

}
