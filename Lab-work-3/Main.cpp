#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "MyLibForLab.h"

int get_integer(const char* msg);
int get_natural_int(const char* msg);


/*
	

*/
//Тестирующая программа
int main() {
	using namespace mywork;
	int len = 0;

	len = get_natural_int("input mass lenght: ");
	while (len <= 0) 
	{
		printf("Incorrect mass size. Try again.\n ");
		len = get_natural_int("input mass lenght: ");
	}

	int* mass = (int*)malloc(len * sizeof(int)); 

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
	el = get_natural_int("\n\nelement to zero: ");
	while (el >= len) 
	{
		printf("exceeded the length of the array.\n");
		el = get_natural_int("element to zero: ");
	}

	zeroOut(mass, len, el);

	printf("\nResult:\n");
	for (int i = 0; i < len; i++) 
	{
		printf("%d ", mass[i]);
	}
	
	
	return 0;
}

int get_natural_int(const char* msg) {

	int a = get_integer(msg);

	while (a < 0) 
	{
		printf("Incorrect input. Need need more than 0\n");
		a = get_integer(msg);
	}
	return a;
}

int get_integer(const char* msg) {
	char answer[256]; 
	int n; 

	printf("%s", msg);
	fgets(answer, sizeof(answer), stdin); 

	
	while (sscanf(answer, "%d", &n) != 1) {
		printf("Incorrect input. Try again: "); 
		fgets(answer, sizeof(answer), stdin); 
	}

	return n; 
}


