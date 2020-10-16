#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 100
#include "findmin.h"

int main() {
	int a[N];
	int count = 0;
	printf("input array size\n");
	if (scanf("%d", &count) != 1) {
		return printf("incorrect input");
	}
	if (count > N) {
		return printf("error");
	}
	printf("input array\n");
	for (size_t i = 0; i < count; i++) {
		if (scanf("%d", &a[i]) != 1) {
			return printf("incorrect input");
		}
	}
	printf("%d", findmin(a, count));
	return 0;
}