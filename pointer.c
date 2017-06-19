/*
 * pointer.c
 *
 *  Created on: Jun 19, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>


int main() {

	int value = 100;

	int *ptr;

	ptr = &value;

	printf("Value: %d \n", value); // 100
	printf("Memory value: %x \n", &value);
	printf("Memory ptr: %x \n", ptr);

	return 0;
}

