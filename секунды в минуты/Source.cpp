#include <stdio.h>
/* ������� � ������ */
/* ��������� ������� � ������ � ������� */
#define SM 60 /* ����� ������ � ������ */
int main()
{
	int sec, mm, left;
	printf(" ������� ������ � ������ � ������� ! \n");
	printf(" ������� ����� ������, ������� �� ������ �� ��������� � ������ \n");
	scanf(" %d", &sec); /* ���� ����� ������ */
	mm = sec % SM; /* ����� ����� */
	left = sec % SM; /* ���������� ����� ������ */
	printf(" %d ������� ��� %d ������, %d ������� \n", sec, mm, left);
}