#include <stdio.h>
#include "Functions.h"

namespace mywork {
	void zeroOut(int* mass, int element) {  //�� ���� ���� �������� ������� �������, ��� ����� �������, ������ �� �����, ���� ������ � ���� ����� ����� �� ������

		mass[element] = NULL; // (mass+element) = 0        ���������� ��� �++ (int**)

	}

	void zeroOut2(void* mass, int element) {
		int* p = (int*)mass;
		p[element] = NULL;

	}



	
}