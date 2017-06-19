/*
 * op_arr.c
 *
 *  Created on: Jun 19, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>

float average(int arr[], int size);

int main() {

	int size;
	int arr[5];
	float average_result;

	printf("Size of arr: ");
	scanf("%d", &size);

	if (size > 0 && size <= 5) {
		average_result = average(arr, size);
		printf("%f", average_result);

	} else {
		printf("Invalid size array");
	}


	return 0;
}

float average(int arr[], int size) {
	float sum;
	float average;

	for (int i = 0; i < size; i++) {
		printf("Enter a number: ");
		scanf("%d", &arr[i]);

		sum = sum + arr[i];
	}

	average = sum / size;

	return average;
}
