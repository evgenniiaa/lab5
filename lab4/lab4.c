#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#define T -6.0
#include <stdio.h>
#include <locale.h>
#include <math.h>

double a, b, y;

int zadanie1()
{
    double gr, rad;

    printf("1. Введите угол в градусах: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180.0;

    printf("sin(%.0lf град) = %.6lf\n", gr, sin(rad));
    return 0;
}

int zadanie2()
{
    double x;

    printf("2. Введите x: ");
    scanf("%lf", &x);

    a = log(x);
    b = sqrt(x * x + T * T);
    y = pow(fabs(a - b * x), 1.0 / 5.0);

    printf(" Результаты:\n");
    printf("t = %.0lf\n", T);
    printf("a = ln(%.2lf) = %.6lf\n", x, a);
    printf("b = sqrt(%.2lf^2 + %.0lf^2) = %.6lf\n", x, T, b);
    printf("y = (|a - b*x|)^(1/5) = %.6lf\n", y);
    return 0;
}

int zadanie3()
{
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;

    printf("3.\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    int cond_a = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0);
    int cond_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("а) только одно из A и B чётное: %d\n", cond_a);
    printf("б) A, B, C кратны трём: %d\n", cond_b);
    return 0;
}

int main()
{
    setlocale(LC_CTYPE, ".UTF-8");

    zadanie1();
    zadanie2();
    zadanie3();

    return 0;
}
