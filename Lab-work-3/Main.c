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
	
	zeroOut((int**)mass, 3); //(int**)
	printf("\n");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", mass[i]);
	}
	





	return 0;
}


void zeroOut(void** mass, int element) {  //�� ���� ���� �������� ������� �������, ��� ����� �������, ������ �� �����, ���� ������ � ���� ����� ����� �� ������
	printf("\n size: %d", sizeof(mass));
	(mass[element]) = 0; // ���������� ��� �++ (int**)

}