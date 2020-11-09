#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"



	int main() {
		using namespace mywork;
		int len = 0;

		printf("input mass lenght: ");
		scanf("%d", &len);
		int* mass = (int*)malloc(len * sizeof(int)); //(int*)

		for (int i = 0; i < len; i++)
		{
			printf("input mass[%d] = ", i);
			scanf("%d", &mass[i]);
		}
		for (int i = 0; i < len; i++)
		{
			printf("%d ", mass[i]);
		}

		//zeroOut(mass, 2); //включение пробы
		
		printf("\n");
		for (int i = 0; i < len; i++)
		{
			printf("%d ", mass[i]);
		}
		




		return 0;
	}

	
