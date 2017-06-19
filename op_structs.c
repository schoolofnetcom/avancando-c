/*
 * op_structs.c
 *
 *  Created on: Jun 19, 2017
 *      Author: Avell 1511
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
	char title[80];
	int pages;
} Book;

void add(Book books[], int *id);
void display(Book books[], int *id);

int main() {

	int op;
	int id = 0;
	Book data[20];

	do {
		printf("1 - New \n");
		printf("2 - Display all \n");
		printf("0 - Exit \n");
		scanf("%d", &op);

		switch (op) {
			case 1:
				add(data, &id);
			break;
			case 2:
				display(data, &id);
			break;

		}
	} while(op != 0);


	return 0;
}

void add(Book books[], int *id) {
	printf("New Record \n \n");

	printf("Title book: \n");
	scanf("%s", &books[*id].title);
	printf("Pages: \n");
	scanf("%d", &books[*id].pages);

	*id = *id + 1;
}

void display(Book books[], int *id) {
	for (int i = 0; i < *id; i++) {
		printf("Title: %s \n", books[i].title);
		printf("Pages: %d \n", books[i].pages);
	}
}

