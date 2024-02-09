#include <stdio.h>
#include <cmath>
#include <conio.h>

int factorial(int n){
    int res;
    res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    getch();
    return res;
}


int f(int n, int x){
    return pow(-1, n) * (pow(2*x, 2*n)/factorial(2*n));
}


int main() {
    int n, x;
    int s = 0;
    printf("n = "); scanf("%d", &n);
    printf("x = "); scanf("%d", &x);
    for (int i=0; i <= n; i++){
        s += f(i, x);
    }
    printf("\ns = %d", s);
    return 0;
}



