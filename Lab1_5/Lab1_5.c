// Lab1_5.c : Визначення цілого числа хвилин по заданим секундам//

#include<locale.h>
#include <stdio.h>
#include <conio.h>

int m;

int main(void)
{
	unsigned int N;
	setlocale(LC_CTYPE, "ukr");
	printf("\n Введiть кiлькiсть секунд  N=");
	scanf_s("%u", &N);

	m = N / 60;

	printf("\n Введена к-ть секунд мiстить повних: %d хв.", m);

	int getch(); getch();
	return 0;
}
