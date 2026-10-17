## Домашнее задание к работе 4 (вар.31)
### Условие задачи
<img width="782" height="43" alt="Снимок экрана 2026-10-06 112622" src="https://github.com/user-attachments/assets/406555a3-9989-40fe-a67f-013a443054e1" />

### 1. Реализация программы
```
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

double F(double x, double y)
{
    return 1 + pow(tan(y + x / (y * y + fabs(x * x / (y + x * x * x / 3.0)))), 2);
}

void zadanie1()
{
    double x, y;

    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);

    printf("F(%.2e, %.3f) = %.3f\n", x, y, F(x, y));
}
int main()
{
    setlocale(LC_ALL, ".UTF-8");
    zadanie1();
    return 0;
}
```

### 2. Результат работы программы
```
Введите x: 2e-4
Введите y: -0,003
F(2,00e-04, -0,003) = 1,261
```
### 3. Информация о разработчике
Федорова Евгения бИД-261
