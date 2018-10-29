#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int iN) {
	if (iN >= 1 && iN <= 9) {
		return 1;
	}
	else return 0;
}

int main(void) {

	int iInput;
	scanf("%d", &iInput);
	if (isCondition(iInput)) {
		for (int i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", iInput, i, iInput*i);
		}
	}
	else return -1;

	return 0;
}