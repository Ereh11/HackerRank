#include <stdio.h>

void update(int *a,int *b) {
    int add = *a + *b;
    *b = *a - *b >= 0 ? *a - *b : (*a - *b) * -1;
    *a = add;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);

    update(pa, pb);

    printf("%d\n%d", a, b);

    return 0;
}