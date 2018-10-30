#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int iN, int iX) {
	if (1 <= iN && iN <= 10000 &&
		1 <= iX && iX <= 10000) {
		return 1;
	}
	else return 0;
}

bool isCondition(int iN) {
	if (1 <= iN && iN <= 10000) {
		return 1;
	}
	else return 0;
}

int main(void) {

	int iN;
	int iX;
	int iInput;

	scanf("%d %d", &iN, &iX);
	if (isCondition(iN, iX)){
		for (int i = 0; i < iN; i++) {
			scanf("%d", &iInput);
			if (iX > iInput) {
				printf("%d ", iInput);
			}
		}

	}
	else return -1;
	return 0;

}