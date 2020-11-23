#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int get_integer(const char* msg);
int get_unsig_int(const char* msg);

//Тестирующая программа
int main() {
	using namespace mywork;
	int len = 0;

	len = get_unsig_int("input mass lenght: ");
	int* mass = (int*)malloc(len * sizeof(int)); //(int*)

	for (int i = 0; i < len; i++)
	{
		printf("input element[%d] = ", i);
		mass[i] = get_integer("");
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", mass[i]);
	}

	int el = 0;
	el = get_unsig_int("\nelement to zero: ");
	while (el >= len)
	{
		printf("exceeded the length of the array.\n");
		el = get_unsig_int("element to zero: ");
	}
	zeroOut2(mass, len, el); // тест безопасной функции


	//zeroOut(mass, 2); //включение пробы

	printf("\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", mass[i]);
	}
	
	//free(mass);
	return 0;
}

int get_unsig_int(const char* msg) {

	int a = get_integer(msg);

	while (a < 0)
	{
		printf("Incorrect input. Need need more than 0\n");
		a = get_integer(msg);
	}
	return a;
}

int get_integer(const char* msg) {
	char answer[256]; // строка для чтения
	int n; // итоговое целое число

	printf("%s", msg); // выводим приглашение ко вводу
	fgets(answer, sizeof(answer), stdin); // считываем строку

	// пока не будет считано целое число
	while (sscanf(answer, "%d", &n) != 1) {
		printf("Incorrect input. Try again: "); // выводим сообщение об ошибке
		fgets(answer, sizeof(answer), stdin); // и заново считываем строку
	}

	return n; // возвращаем корректное целое число
}


