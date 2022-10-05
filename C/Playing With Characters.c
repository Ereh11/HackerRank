#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c, str[100], sen[100];
    
    scanf("%c%s%s", &c, &str);
    fgets(sen, 100, stdin);
    
    printf("%c\n%s\n%s", c, str, sen); 
     
    return 0;
}