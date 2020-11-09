#include <stdio.h>
#include "Functions.h"

namespace mywork {
	void zeroOut(int* mass, int element) {  //по идее если написать элемент больший, чем длина массива, ничего не будет, если память в хипе далее ничем не забита

		mass[element] = NULL; // (mass+element) = 0        приведение для с++ (int**)

	}

	void zeroOut2(void* mass, int element) {
		int* p = (int*)mass;
		p[element] = NULL;

	}



	
}