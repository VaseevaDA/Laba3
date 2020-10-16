#include "search.h"
int abs(int x) {
	if (x < 0) {
		return -x;
	}
	return x;
}
int search(int* a, int count, int num) {
	int min = _CRT_INT_MAX;
	int imin = 0;
	for (size_t i = 0; i < count; i++) {
		if (abs(num - a[i]) < min) {
			min = abs(num - a[i]);
			imin = a[i];
		}

	}
	return imin;
}