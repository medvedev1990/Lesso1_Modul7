#include<iostream>
#include<locale.h>
#include<stdarg.h>
#include"Header.h"
#include<time.h>
int i;

void prosto(int *a)
{
	int chek = 2;
	int del = 0;
	int b;
	while (chek < *a)
	{
		if (*a % chek == 0)
		{
			printf("число не простое так как делиться на %d\n",chek);
			break;
		}
		chek++;
	}
	printf("число простое\n");



}
void ZapMass(int *mass, int val)
{
	for (i = 0;i < val;i++)
	{
		mass[i] = 0 + rand() % 100;
	}
}
void printMass(int *mass, int val)
{
	for (i = 0;i < val;i++)
	{
		printf("%d\t", mass[i]);
	}
	printf("\n");
}
void Search(int *mass, int val, int *a)
{
	for (i = 0;i < val;i++)
	{
		if (mass[i] == *a)
		{
			printf("число найдено на %d позиции \n", i);
			break;
		}
	}
}
void SearchBin(int *mass, int val, int *key)
{
	int left = 0;
	int right = val-1;
	int search = -1;
	int seredina;
	while (left <= right)
	{
		seredina = (left + right) / 2;
		if (*key == mass[seredina])
		{
			search = seredina;
			break;
		}
		if (*key < mass[seredina])
			right = seredina - 1;
		else
			left = seredina + 1;
	}
	if (search == -1)
		printf("Элемент не найден\n");
	else
		printf("Элемент найден на позиции %d\n", seredina);

}
void Sortirovka(int *mass, int val)
{
	int j, m;
	for (i = 0;i < val;i++)
	{
		for (j = val - 1;j >= i;j--)
		{
			if (mass[j] < mass[j - 1])
			{
				m = mass[j];
				mass[j] = mass[j - 1];
				mass[j - 1] = m;
			}

		}
	}
}
void Hello(char *m)
{
	printf("%s\n", m);
}
void W(char *world)
{
	printf("%c\n", *world);
}