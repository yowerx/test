#include <stdio.h>
#include <Windows.h>

void main() {
	int v1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Введите температуру в помещении в градусах Цельсия = ");
	scanf_s("%d", &v1);

	if (v1 < 18)
		printf("Холодно");
	if (v1 >= 18 && v1 < 22)
		printf("Прохладно");
	if (v1 >= 22 && v1 < 26)
		printf("Тепло");
	if (v1 >= 26)
		printf("Жарко");

}