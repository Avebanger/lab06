#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int N, proizvedenie=1;
	printf("Введите целое число N < 1000: ");
	scanf("%d", &N);
	if (N == 0)
	{
		proizvedenie = 0;
	}

	else
	{
		while (N>0)
		{
			proizvedenie *= (N % 10);
			N /= 10;
		}
	}

	if (proizvedenie>=100 && proizvedenie<1000)
	{
		printf("произведение = %d и оно трехзначно", proizvedenie);
	}

	else
	{
		printf("произведение = %d и оно НЕ трехзначно", proizvedenie);
	}
	return 0;
}
