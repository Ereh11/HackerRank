#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, ans = 0;
    scanf("%d", &n);
    
    while(n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    
    printf("%d", ans);
    
    return 0;
}