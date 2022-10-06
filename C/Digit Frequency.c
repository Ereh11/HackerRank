#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int frq[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for(int i = 0 ; i <= strlen(s) ; i++) 
        if(s[i] >= 48 && s[i] <= 57) frq[s[i] - 48]++;
        
    for(int i = 0 ; i <= 9 ; i++) printf("%d ", frq[i]);
    
    return 0;
}
