#include <stdio.h>

int fibonacci(int x) {
    if (x == 0) {
        return 0;
    }
    else if (x == 1) {
        return 1;
    }
    return fibonacci(x - 1) + fibonacci(x - 2);
}


int main() {
    int position;       
    printf("n = "); scanf("%d", &position);
    for (int i = 0; i < position; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
