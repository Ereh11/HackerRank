#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;

    scanf("%d\n%d", &a, &b);

    const char *ar[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = a; i <= b ; i++)
    {
  	    if (i>=1 && i<=9) puts(ar[i - 1]);
        else
        {
            if(i&1) puts("odd");
            else puts("even");
        }
    }
    
    return 0;
}

