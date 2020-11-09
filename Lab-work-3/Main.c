#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void zeroOut(void** mass, int element);

int main() {
	int len;

	printf("input mass lenght: ");
	scanf("%d", &len);
	int* mass = malloc(len * sizeof(int)); //(int*)
	
	for (int i = 0; i < len; i++)
	{
		printf("input mass[%d] = ", i);
		scanf("%d", &mass[i]);
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", mass[i]);
	}
	
	zeroOut(mass, 3); //(int**)
	printf("\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", mass[i]);
	}
	





	return 0;
}


void zeroOut(int* mass, int element) {  //по идее если написать элемент больший, чем длина массива, ничего не будет, если память в хипе далее ничем не забита
	//printf("\n size: %d", sizeof(mass));
	(mass[element]) = 0; // приведение для с++ (int**)

}