#include <stdio.h>
#include <stdlib.h>
#include "MyLibForLab.h"

namespace mywork {



	/*
		!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		Переделать под работу с указателем массива.

	*/
	/*
		функция переворота массива
		O(n) 
	*/
	int zeroOut(int* mass, int len, int element) {
		if (element >= len || element < 0)
		{
			return 1;
		}
		int i = element; 
		while (i < len)
		{
			i++;
			mass[i - 1] = mass[i];
		}
		mass[len - 1] = 0;
		return 0;
	}

	

	/*
		!!!!!!!!!Над указателем неопределенного типа нельзя выполнять операцию разыменования без явного приведения типа.!!!!!!!!!!!! =>
		=> я не могу сделать универсальную ф-цию для обнуления элемента (int, float, double, char)
	*/
	void zeroOut3(void* mass, int element, size_t size) { //size_t - результат sizeof(mass)  




	}




}