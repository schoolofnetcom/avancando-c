/*
 * typedef.c
 *
 *  Created on: Jun 19, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>
#include<string.h>


int main() {

		typedef int myInt;
		typedef float myFloat;
		typedef char String[50];

		myInt a = 500;
		myFloat b = 21.2;
		String name;

		strcpy(name, "Leonan");

		printf("%s", name);
		printf("%d", a);
		printf("%f", b);

	return 0;
}

