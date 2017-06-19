/*
 * arr.c
 *
 *  Created on: Jun 19, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>

int main() {

	// 0..9
	int arr[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = (i + 1) * 2;
	}


	for (int i = 0; i < 10; i++) {
		printf("%d \n", arr[i]);
	}

	return 0;
}

