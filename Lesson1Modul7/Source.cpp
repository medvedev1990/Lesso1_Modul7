
#include<iostream>
#include<locale.h>
#include<stdarg.h>
#include"Header.h"
#include<string.h>
#include<time.h>

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	short int n, exit;
	do
	{
		printf("Enter number exemple: ");
		scanf("%hu", &n);
		switch (n)
		{
		case 1:
		{
			/*1.Объявите указатель на целое число, называемое адресом.*/
			int a = 5;
			int *b = NULL;
			b = &a;
		}
		break;
		case 3:
		{
			/*3.Объявить указатель на текстовую строку с сообщением «Hello»*/
			char m[] = { "Hello" };
			char *a = m;
			Hello(a);
		}
		break;
		case 4:
		{
			/*4.Написать функцию, которая проверяет, является ли переданное ей число простым? Число называется простым, если оно делится без остатка только на себя и на единицу.*/
			int a;
			printf("введите число: ");
			scanf("%d", &a);
			prosto(&a);
		}
		break;
		case 5:
		{
			/*5.Написать функцию, реализующую алгоритм линейного поиска заданного ключа в одномерном массиве.*/
			int a[20];
			int search;
			ZapMass(a, 20);
			printMass(a, 20);
			printf("введите число для поиска: ");
			scanf("%d", &search);
			Search(a, 20, &search);
		}
		break;
		case 6:
		{
			/*6.Написать функцию, реализующую алгоритм бинарного поиска заданного ключа в одномерном массиве.*/
			int a[20];
			int search;
			ZapMass(a, 20);
			printMass(a, 20);
			printf("введите число для поиска: ");
			scanf("%d", &search);
			Sortirovka(a, 20);
			SearchBin(a, 20, &search);//
		}
		break;
		case 8:
		{
			/*8.Каков результат следующего сегмента программы?

int  count = 10, *temp, sum = 0;
temp = &count; // в temp записываем адрес count
*temp = 20; // значениею temp присваем значение 20 но по скольку там сидит адрес count значение count тоже 20
temp = &sum; //в temp записываем адрес sum
*temp = count; значениею temp присваем значение count но по скольку там сидит адрес sum значение sum тоже = count
printf("count = %d, *temp = %d, sum = %d\n", count, *temp, sum); на выаоде мы получим значение всех трех параметров = 20;
			*/


			// не понял как можно применить рекурсию.
		}
		break;
		case 2:
		{
			//2.Назначьте значение символа 'W' переменной, на которую указывает буквенная указатель.
			char w = 'W';
			char *a = &w;
			W(a);
		}
		break;
		default:printf("Not exemple! Please repeat enter number exemple\n");
			break;
		}
		printf("To be continue? 1-Yes 2-No: ");
		scanf("%hu", &exit);
		printf("\n");

	} while (exit == 1);

}