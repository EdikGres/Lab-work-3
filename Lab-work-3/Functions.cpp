#include "Functions.h"

namespace mywork {
	void zeroOut(int* mass, int element) {  //по идее если написать элемент больший, чем длина массива, ничего не будет, если память  далее ничем не забита(?)

		mass[element] = NULL; // (mass+element) = 0        приведение для с++ (int**)

	}

	int zeroOut2(int* mass, int len, int element) {  //безопасный вариант функции
		if (element >= len || element < 0) //проверка на то, что элемент не выходит за границы и не меньше нуля
		{
			return 0;
		}

		int* temp = (int*)malloc(sizeof(int) * len); // выделение памяти для временного массива

		for (int i = 0, j = 0; i < len; i++, j++) //цикл который заполняет временный массив без нужного нам элемента(который удалён)
		{
			temp[i] = (j == element) ? mass[++j] : mass[j]; // решил сжать решение в тернарный оператор для красоты
		}
		temp[len - 1] = 0; //обнуление последнего элемента
		
		for (int i = 0; i < len; i++) //присвоение основному массиву, с которым работали значения temp массива
		{
			mass[i] = temp[i];
		}
		free(temp);  //освобождение памяти для temp массива.


		return 1;
	}

	int zeroOut_float(float* mass, int len, int element) {
		if (element >= len || element < 0)
		{
			printf("error, out of bounds of the array!");
			return 0;
		}

		mass[element] = NULL; // == *(mass+element) = 0        приведение для с++ (int**)
		return 1;

	}

	int zeroOut_double(double* mass, int len, int element) {
		if (element >= len || element < 0)
		{
			printf("error, out of bounds of the array!");
			return 0;
		}

		mass[element] = NULL; // == *(mass+element) = 0        приведение для с++ (int**)
		return 1;

	}

	/*
		!!!!!!!!!Над указателем неопределенного типа нельзя выполнять операцию разыменования без явного приведения типа.!!!!!!!!!!!! =>
		=> я не могу сделать универсальную ф-цию для обнуления элемента (int, float, double, char)
	*/
	void zeroOut3(void* mass, int element, size_t size) { //size_t - результат sizeof(mass)  




	}




}