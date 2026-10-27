#include <stdio.h>
const int k = 60;
int main(void) {
    double a = 0;
    printf("Введите число для конвертации:\n");
    while (1)
    {
        if (scanf("%lf", &a) == 1) 
        {
            a *= k;
            break;
        }
        else 
        {
            printf("Введено не число! Попробуйте снова: ");
            while (getchar() != '\n');
        }
    }
    printf("%.2lf\n", a);
    
    return 0;
}