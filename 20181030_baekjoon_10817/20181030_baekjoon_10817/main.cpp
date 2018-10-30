#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int iA, int iB, int iC) {

	if (1 <= iA && iA <= 100 &&
		1 <= iB && iB <= 100 &&
		1 <= iC && iC <= 100) {
		return 1;
	}
	else return 0;
}

int main(void) {
	int iA, iB, iC;
	int iNum[3] = { 0,0,0 };
	scanf("%d %d %d", &iA, &iB, &iC);

	if (isCondition(iA, iB, iC)) {
		iNum[0] = iA;
		iNum[1] = iB;
		iNum[2] = iC;
		for (int i = 0; i < 3; i++) {
			for (int j = i + 1; j < 3; j++) {
				if (iNum[i] < iNum[j]) {
					int tmp = iNum[j];
					iNum[j] = iNum[i];
					iNum[i] = tmp;
				}
			}
		}
		printf("%d", iNum[1]);


	}
	else return -1;
	return 0;
}