#include <stdio.h>

const int k = 60;

int main(void) {
    double a = 0;
    int c;
    int running = 1;

    printf("Введите число для конвертации (или 'q' для выхода):\n");

    while (running) {
        if (scanf("%lf", &a) == 1) {
            c = getchar();
            if (c == '\n' || c == EOF) {
                printf("Результат: %.2f\n\n", a * k);
                if (c == EOF) {
                    running = 0;
                } else {
                    printf("Введите следующее число (или 'q' для выхода):\n");
                }
                continue;
            }
        } else {
            c = getchar();
            if (c == 'q' || c == 'Q' || c == EOF) {
                running = 0;
                continue;
            }
        }

        // Очистка буфера при некорректном вводе (например, "12abc" или "текст")
        if (c != '\n' && c != EOF) {
            while ((c = getchar()) != '\n' && c != EOF);
        }

        if (c == EOF) {
            running = 0;
        } else {
            printf("Введено не число! Попробуйте снова (или 'q' для выхода): ");
        }
    }

    return 0;
}
