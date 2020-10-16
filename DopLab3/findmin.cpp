#include "findmin.h"

int abs(int x) {
	if (x < 0) {
		return -x;
	}
	return x;
}

int findmin(int* a, int count) {
	int min = _CRT_INT_MAX;
	int imin = min;
	for (size_t i = 0; i < count; i++) {
		if(abs(a[i])<min){
			min = abs(a[i]);
			imin = a[i];
		}
	}
	return min;
}