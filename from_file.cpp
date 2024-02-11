#include <stdio.h>
#include <cmath>
#include <time.h>


int factorial(int n){
    int res;
    res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}


int f(int n, int x){
    return pow(-1, n) * (pow(2*x, 2*n)/factorial(2*n));
}


int recursion_func(int n, int x, int s){
    if (n == -1){
        return s;
    }
    else {
        s += f(n, x);
        return recursion_func(n-1, x, s);
    }
}


int iteration_func(int n, int x, int s){
    for (int i=0; i <= n; i++){
        s += f(i, x);
    }
    return s;
}


int main() {
    int n, x, type, func;
    printf("n = "); scanf("%d", &n);
    printf("x = "); scanf("%d", &x);
    printf("Метод\n1: Рекурсивный\n2: Итерационный\n"); scanf("%d", &type);
    int stime = clock();
    if (type == 1){
        func = recursion_func(n, x, 0);
    }
    else if(type == 2){
        func = iteration_func(n, x, 0);
    }
    else{
     printf("Метод отсуствует");
    }
    printf("\ns = %d\nВремя выполнения: %ld мс\n", func, clock()-stime);
    return 0;
}
