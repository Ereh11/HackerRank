#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    return a > b ? a : b;
}

int mx_and(int n, int k)
{
    int mx = 0;
    for(int i = 1 ; i <= n ; i++)
        for(int j = i + 1; j <=n ; j++) 
          if ((i & j) < k) mx = max(mx , (i & j));
    return mx;
}

int mx_or(int n, int k)
{
    int mx = 0;
    for(int i = 1 ; i <= n ; i++)
        for(int j = i + 1; j <=n ; j++) 
          if ((i | j) < k) mx = max(mx , (i | j));
    return mx;
}
int mx_xor(int n, int k)
{
    int mx = 0;
    for(int i = 1 ; i <= n ; i++)
        for(int j = i + 1; j <=n ; j++) 
          if ((i ^ j) < k) mx = max(mx , (i ^ j));
    return mx;
}

void calculate_the_maximum(int n, int k) {
  printf("%d\n%d\n%d", mx_and(n, k),  mx_or(n, k),  mx_xor(n, k));
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
