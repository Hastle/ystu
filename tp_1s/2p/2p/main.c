#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int bgn, end, step, x;
    double min = 100.0, max = -100.0;
    float y;
    printf("Функция: y=(x^2+2.3^x)*(x+cos(x))/(x+ln(x^3+1)) \n");
    printf("Введите начало диапозона: ");
    scanf("%d", &bgn);
    printf("Введите конец диапозона: ");
    scanf("%d", &end);
    printf("Введите шаг: ");
    scanf("%d", &step);
    for (bgn = bgn; bgn <= end;) {
        x = bgn;
        y = (pow(x,2)+pow(2.3,x))*(x+cos(x))/(x+log(pow(x,3)+1));
        printf("f(%d) = %f \n", x, y);
        bgn = bgn+step;
        if (y<min && y!=INFINITY)
            min=y;
        if (y>max && y!=INFINITY)
            max=y;
    }
    printf("Минимальное значение %f \n", min);
    printf("Максимальное значение %f \n", max);
    return 0;
}
