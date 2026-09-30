#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"RUS");
	int  x;
	double f;
	printf("Введите x: ");
	scanf("%d",&x);
	f = (x <= 3) ? -pow(x, 2) + 3 * x + 9 : x / (pow(x, 2) + 1);
	printf("F = %f",f);
}
// с обычными ифами
// x = 1 F=11 | f= -1 + 3 + 9 = -1 +12 = 11
// x = 10 F = 0,099010 | f= 10/(100+1) =  
