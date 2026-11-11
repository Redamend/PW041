#include <stdio.h>

const int k = 60;

int main(void) {
    double a = 0;
    int c = 0;
    int res = 0;

    printf("Введите число для конвертации:\n");

    while ((res = scanf("%lf", &a)) != EOF) 
    {
        if (res == 1) 
        {
            c = getchar();
            if (c == '\n' || c == EOF) 
            {
                printf("Результат: %.2f\n\n", a * k);
                if (c == EOF) 
                {
                    break;
                }
                printf("Введите следующее число:\n");
                continue;
            }
        } else 
        {
            c = getchar();
            if (c == 'q' || c == 'Q' || c == EOF) {
                break;
            }
        }
        if (c != '\n' && c != EOF) 
        {
            while ((c = getchar()) != '\n' && c != EOF);
        }

        if (c == EOF) 
        {
            break;
        }
        printf("Введено не число! Попробуйте снова:\n");
    }

    return 0;
}