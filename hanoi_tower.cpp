#include <stdio.h>

void hanoi_tower(int n, int from, int to, int tmp)
{
    if (n != 0)
    {
        hanoi_tower(n - 1, from, tmp, to);
        printf("Переместил кольцо %d с %d на %d \n", n, from, to);
        hanoi_tower(n - 1, tmp, to, from);
    }
}

int main()
{
    int n;
    printf("Количество колец = ");
    scanf("%d", &n);
    hanoi_tower(n, 1, 3, 2);
    return 0;
}

