#define _CRT_SECURE_NO_WARNINGS
#define N 100
#include <stdio.h>
#include "search.h"

int main() {
	int a[N];
	int num = 0;
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
	printf("input number\n");
	if (scanf("%d", &num) != 1) {
		return printf("incorrect input");
	}
	printf("%d", search(a, count, num));
	return 0;

}