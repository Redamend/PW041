#include <stdio.h>

const int k = 60;

int main(void) {
    double a = 0;
    int c;
    int res;

    printf("Введите число для конвертации (или 'q' для выхода):\n");

    while ((res = scanf("%lf", &a)) != EOF) {
        if (res == 1) {
            c = getchar();
            if (c == '\n' || c == EOF) {
                printf("Результат: %.2f\n\n", a * k);
                if (c == EOF) {
                    break;
                }
                printf("Введите следующее число (или 'q' для выхода):\n");
                continue; // Сразу переходим к следующему scanf в условии while
            }
        } else {
            c = getchar();
            if (c == 'q' || c == 'Q' || c == EOF) {
                break; // Выход из цикла
            }
        }

        // Сюда доходим только при ошибке ввода (например, "12abc" или "текст")
        if (c != '\n' && c != EOF) {
            while ((c = getchar()) != '\n' && c != EOF);
        }

        if (c == EOF) {
            break;
        }
        printf("Введено не число! Попробуйте снова (или 'q' для выхода): ");
    }

    return 0;
}
