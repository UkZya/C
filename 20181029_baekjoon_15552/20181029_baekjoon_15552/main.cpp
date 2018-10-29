#include<stdio.h>
#include<stdlib.h>
#include<iostream>

bool isCondition(int iN) {

	if (0 < iN && iN <= 1000000) {
		return 1;
	}
	else return 0;
}

int main(void) {
	int iNumOfCase;
	int iInput1;
	int iInput2;
	int iSum;

	scanf("%d", &iNumOfCase);
	if (isCondition(iNumOfCase)) {
		for (int i = 0; i < iNumOfCase; i++) {
			scanf("%d %d", &iInput1, &iInput2);
			printf("%d\n", iInput1 + iInput2);
		}
	}
	else return -1;

	return 0;
}