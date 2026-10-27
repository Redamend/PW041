#include <stdio.h>

int main(void) {
    int N, i = 0;
    double num, sum = 0;

    printf("Введите N: ");
    scanf("%d", &N);

    printf("Введите %d чисел:\n", N);
    while (i < N) {
        scanf("%lf", &num);
        if (num > 0) {
            sum += num;
        }
        i++;
    }

    printf("Сумма: %.6f\n", sum);
    return 0;
}
