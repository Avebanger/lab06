#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	double x, y;
	printf("Введите координаты x,y через пробел: ");
	scanf("%lf %lf",&x,&y);
	int check = 0;
	if (((y <= 3.) && (y >= 2.)) && ((x >= -2.) && (x <= 5.))) check = 1;
	else if ( ((x >= -2.) && (x <= 3.)) && ((y <= 5.) && (y >= 2.)) )
	{
		check = 1;
	}
	if (check == 1) printf("Точка входит в заштрихованную область \n");
	else printf("Точка вне заштрихованной области");
}
