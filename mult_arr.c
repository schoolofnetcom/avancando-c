/*
 * mult_arr.c
 *
 *  Created on: Jun 19, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>

void display(int arr[2][2]);

int main() {

	int arr[2][2];

	printf("Enter number (4): ");

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	display(arr);

// 	| 1 2 |
//	| 3 4 |

	return 0;
}

void display(int arr[2][2]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d \n", arr[i][j]);
		}
	}
}

