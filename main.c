/*
 *	Author: Cody Botte
 *	Date: 7/16/22
 *	Purpose: To output a "space" seperated standard output of {Element}
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

typedef struct {
	int num;
} Element;

Element getRandomElement(void);
void printElement(Element element);

int main(int argc, const char* argv[]) {
	if (argc != 2) //Contains parameter QUANTITY
		exit(1);

	const int QUANTITY = strtol(argv[1], NULL, 10);

	srand((unsigned)time(NULL));

	for (int i = 0; i < QUANTITY; i++) //Print {QUANTITY} Element(s)
		printElement(getRandomElement());

	return 0;
}

Element getRandomElement(void) {
	return (Element){ rand() % INT_MAX };
}

void printElement(Element element) {
	printf("%d ", element.num);
}
