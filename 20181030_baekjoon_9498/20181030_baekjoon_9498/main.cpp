#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int iN) {
	if (0 <= iN && iN <= 100) {
		return 1;
	}
	else return 0;
}

int main(void) {
	int iInput;
	scanf("%d", &iInput);
	if (isCondition(iInput)) {
		if (iInput >= 90) {
			printf("A");
		}
		else if (80 <= iInput && iInput <= 89) {
			printf("B");
		}
		else if (70 <= iInput && iInput <= 79) {
			printf("C");
		}
		else if (60 <= iInput && iInput <= 69) {
			printf("D");
		}
		else printf("F");
	}
	else return -1;

	return 0;
}