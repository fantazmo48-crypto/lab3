#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define D 2.54
#define Pulg 2.32166
#define Slit 2.7076
#define Seamil 1.852
#define Suhmil 1.609
#define Romemil 1.475
#define OldRusmil 7.468
#define Geomil 7.412

int main() {
    setlocale(LC_ALL, "RU");
	MyProject();
	numbers();
	Altcalculate();
	calculate();
	table();
	HomeworkVar2();
	return 0;
}

int MyProject() {
	printf("\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * *\n");
	printf("\t\t\t\t\t*                                         *\n");
	printf("\t\t\t\t\t* Тема:Ввод/Вывод Данных                  *\n");
	printf("\t\t\t\t\t*                                         *\n");
	printf("\t\t\t\t\t*     Выполнил Четверня Д.А.              *\n");
	printf("\t\t\t\t\t*                                         *\n");
	printf("\t\t\t\t\t* * * * * * * * * * * * * * * * * * * * * *\n\n\n");
	printf("\t\t\t\t\t\t===Начало Лабораторной работы===\n\n\n");
	return 0;
}

int numbers() {
	printf("Задание 1\n\n");
	int num1, num2;
	puts("введите число");
	scanf_s("%d", &num1);
	printf("Введено число %d\n\n", num1);
	puts("введите второе число");
	scanf_s("%d", &num2);
	printf("Введено число %d\n\n", num2);
	printf("=== Результаты вычислений (второго числа на первое) ===\n");
	printf("Сумма: %d\n", num2 + num1);
	printf("Разность: %d\n", num2 - num1);
	printf("Произведение: %d\n", num2 * num1);
	if (num1 != 0) {
		printf("Частное (целочисленное): %d\n", num2 / num1);
		printf("Частное (точное): %.2f\n", (float)num2 / num1);
		printf("Остаток от деления: %d\n\n\n", num2 % num1);
	}
	else {
		printf("Деление на ноль невозможно!\n\n\n");
	}
	printf("\t\t\t\t\t\t===Следующая программа===\n\n\n");
	return 0;
}

int calculate() {
	printf("Задание 2\n\n");
	int dym;
	float result;
	puts("введите количество дюймов:");
	scanf_s("%d", &dym);
	result = dym * D;
	printf("%d дюймов – это % .1f см\n\n", dym, result);

	puts("введите количество испан. дюймов:");
	scanf_s("%d", &dym);
	result = dym * Pulg;
	printf("%d испан. дюймов – это % .1f см\n\n", dym, result);

	puts("введите количество старолит. дюймов:");
	scanf_s("%d", &dym);
	result = dym * Slit;
	printf("%d старолит. дюймов – это % .1f см\n\n\n", dym, result);
	printf("\t\t\t\t\t\t===Следующая программа===\n\n\n");
	return 0;
}

int Altcalculate() {
	printf("Альтернативное Задание 2\n\n");
	int dym;
	float result;
	puts("введите количество миль:");
	scanf_s("%d", &dym);
	printf("\n");
	result = dym * Seamil;
	printf("%d морских миль – это % .1f км\n\n", dym, result);
	result = dym * Suhmil;
	printf("%d сухопутных миль – это % .1f км\n\n", dym, result);
	result = dym * Romemil;
	printf("%d римских миль – это % .1f км\n\n", dym, result);
	result = dym * OldRusmil;
	printf("%d старорусских миль – это % .1f км\n\n", dym, result);
	result = dym * Geomil;
	printf("%d геометрических миль – это % .1f км\n\n\n", dym, result);
	printf("\t\t\t\t\t\t===Следующая программа===\n\n\n");
	return 0;
}

int table() {
	printf("Задание 3\n\n");
	float a, b;
	printf("Введите число a: ");
	scanf_s("%f", &a);

	printf("Введите число b: ");
	scanf_s("%f", &b);

	printf("\n");

	printf("------------------------------------\n");
	printf("|   a * b   |   a + b   |   a - b   |\n");
	printf("------------------------------------\n");
	printf("| -3%.0f * -4%.0f | -3%.0f + -4%.0f | -3%.0f - -4%.0f |\n", a, b, a, b, a, b);
	printf("------------------------------------\n");
	printf("|     %-4.0f  |     %-4.0f  |     %-4.0f  |\n", a * b, a + b, a - b);
	printf("------------------------------------\n\n\n");
	printf("\t\t\t\t\t\t===Домашняя работа===\n\n\n");
	return 0;
}

int HomeworkVar2() {
	double A, B;

	printf("Введите длину стороны A: ");
	if (scanf_s("%lf", &A) != 1) {
		printf("Ошибка: нужно ввести число.\n");
		return 1;
	}

	printf("Введите длину стороны B: ");
	if (scanf_s("%lf", &B) != 1) {
		printf("Ошибка: нужно ввести число.\n");
		return 1;
	}

	if (A <= 0 || B <= 0) {
		printf("Ошибка: стороны прямоугольника должны быть больше нуля.\n");
		return 1;
	}

	double area = A * B;
	double perimeter = 2 * (A + B);

	printf("\nВведено: A = %.2f, B = %.2f\n", A, B);
	printf("Площадь прямоугольника: %.2f\n", area);
	printf("Периметр прямоугольника: %.2f\n", perimeter);

	return 0;
}