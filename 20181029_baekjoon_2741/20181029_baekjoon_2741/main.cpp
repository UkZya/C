#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main(void) {
	int iInput;

	scanf("%d", &iInput);

	for (int i = 1; i <= iInput; i++) {
		printf("%d\n", i);
	}
	return 0;

}