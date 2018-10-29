#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int iN) {
	if (1 <= iN && iN <= 100) {
		return 1;
	}
	else return 0;
}

int main(void) {
	int iInput;
	int iNumber;
	int iSum = 0;
	scanf("%d", &iInput);

	if (isCondition(iInput)) {
		for (int i = 0; i < iInput; i++) {
			scanf("%1d", &iNumber);
			iSum = iSum + iNumber;
		}
		printf("%d\n", iSum);
	}
	return 0;
}