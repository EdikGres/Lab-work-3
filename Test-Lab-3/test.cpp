#include "pch.h"
#include "../Lab-work-3/Functions.h"


using namespace mywork;
	TEST(ZeroOutFunc, IntegerMassTest) {
		int mass[] = { 4, 6, 1, 54, 1, 4, 1 };
		zeroOut((int*)mass, 3);

		EXPECT_EQ(mass[3], 0); //главный тестик на обнуление

		EXPECT_EQ(mass[0], 4); //проверка остальных элементов, затронуты ли они
		EXPECT_EQ(mass[1], 6);
		EXPECT_EQ(mass[2], 1);
		EXPECT_EQ(mass[4], 1);
		



	}
	/* TEST(ZeroOutFunc, FloatMassTest) {
		float mass[] = { 3.4, 65.12, 13.334, 14.8, 96.567 };
		zeroOut((float*)mass, 4);
		
		EXPECT_EQ(mass[4], 0); //главный тестик на обнуление

		EXPECT_EQ(mass[0], 3.4); //проверка остальных элементов, затронуты ли они
		EXPECT_EQ(mass[1], 65.12);
		EXPECT_EQ(mass[2], 13.334);
		EXPECT_EQ(mass[3], 14.8);
	} */

	TEST(ZeroOut2Func, IntegerMassTest) {
		int mass[] = { 4, 6, 1, 54, 1, 4, 1 };

		zeroOut2(mass, 3);

		EXPECT_EQ(mass[3], 0); //главный тестик на обнуление

		EXPECT_EQ(mass[0], 4); //проверка остальных элементов, затронуты ли они
		EXPECT_EQ(mass[1], 6);
		EXPECT_EQ(mass[2], 1);
		EXPECT_EQ(mass[4], 1);
	}
	/*TEST(ZeroOut2TestFunc, FloatMassTest) {
		float mass[] = { 3.4, 65.12, 13.334, 14.8, 96.567 };

		zeroOut2(mass, 3);

		EXPECT_EQ(mass[4], 0); //главный тестик на обнуление

		EXPECT_EQ(mass[0], 3.4); //проверка остальных элементов, затронуты ли они
		EXPECT_EQ(mass[1], 65.12);
		EXPECT_EQ(mass[2], 13.334);
		EXPECT_EQ(mass[3], 14.8);
		SUCCEED();
	}
	*/












