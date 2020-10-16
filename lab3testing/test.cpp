#include "pch.h"
#include "../lab 3/search.cpp"


TEST(TestAbs, HandlesNegativeInut) {
	for (int i = -1000; i < 0; i++) {
		ASSERT_EQ(abs(i), -i);
	}
}

TEST(TestAbs, HandlesNoNegativeInput) {
	for (int i = 0; i < 10000; i++) {
		ASSERT_EQ(abs(i), i);
	}
}

TEST(TestSearch, CorrectWork) {
	int a[5] = { 1,2,3,4,5 };
	int b = 3;
	ASSERT_EQ(search(a, 5, b), 3);
}