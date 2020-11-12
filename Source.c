#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[11];
	printf("input 11 chicel\n");
	for (int n = 0; n < 11; n++) {
		while (1) {
			printf("input chiclo ");
			if (scanf("%d", &arr[n]) == 1) {
				printf("\n");
				break;
			}
			else {
				printf("error input again");

			}

		}
	}
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (arr[j] < arr[i]) {
				int a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
	printf("mediana %d", arr[5]);
}

