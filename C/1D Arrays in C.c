#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    int ar[n];
    
    for(int i = 0; i < n ; i++) scanf("%d", &ar[i]), ans +=ar[i];
    
    printf("%d", ans);
    return 0;
}