
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
			/*1.�������� ��������� �� ����� �����, ���������� �������.*/
			int a = 5;
			int *b = NULL;
			b = &a;
		}
		break;
		case 3:
		{
			/*3.�������� ��������� �� ��������� ������ � ���������� �Hello�*/
			char m[] = { "Hello" };
			char *a = m;
			Hello(a);
		}
		break;
		case 4:
		{
			/*4.�������� �������, ������� ���������, �������� �� ���������� �� ����� �������? ����� ���������� �������, ���� ��� ������� ��� ������� ������ �� ���� � �� �������.*/
			int a;
			printf("������� �����: ");
			scanf("%d", &a);
			prosto(&a);
		}
		break;
		case 5:
		{
			/*5.�������� �������, ����������� �������� ��������� ������ ��������� ����� � ���������� �������.*/
			int a[20];
			int search;
			ZapMass(a, 20);
			printMass(a, 20);
			printf("������� ����� ��� ������: ");
			scanf("%d", &search);
			Search(a, 20, &search);
		}
		break;
		case 6:
		{
			/*6.�������� �������, ����������� �������� ��������� ������ ��������� ����� � ���������� �������.*/
			int a[20];
			int search;
			ZapMass(a, 20);
			printMass(a, 20);
			printf("������� ����� ��� ������: ");
			scanf("%d", &search);
			Sortirovka(a, 20);
			SearchBin(a, 20, &search);//
		}
		break;
		case 8:
		{
			/*8.����� ��������� ���������� �������� ���������?

int  count = 10, *temp, sum = 0;
temp = &count; // � temp ���������� ����� count
*temp = 20; // ��������� temp �������� �������� 20 �� �� ������� ��� ����� ����� count �������� count ���� 20
temp = &sum; //� temp ���������� ����� sum
*temp = count; ��������� temp �������� �������� count �� �� ������� ��� ����� ����� sum �������� sum ���� = count
printf("count = %d, *temp = %d, sum = %d\n", count, *temp, sum); �� ������ �� ������� �������� ���� ���� ���������� = 20;
			*/


			// �� ����� ��� ����� ��������� ��������.
		}
		break;
		case 2:
		{
			//2.��������� �������� ������� 'W' ����������, �� ������� ��������� ��������� ���������.
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