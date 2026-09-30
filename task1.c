#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"RUS");
	int yeas,ostatok;
	printf("Введите год: ");
	scanf("%d",&yeas);
	ostatok = yeas % 4;
	if ((ostatok == 0 && (yeas%100!=0)) || (yeas%400==0))
	{
		printf("%d год високосный\n",yeas);
	}
	else
	{
		printf("%d год не високосный\n",yeas);
	}
}