#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    int **f;
    f=&a;
    *a=*a+*b;
    *b=abs(*a-*b);
    printf("%d\n%d\n%d", *a, *b, **f);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    

    return 0;
}
