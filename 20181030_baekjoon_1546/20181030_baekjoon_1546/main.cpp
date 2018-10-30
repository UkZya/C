#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int iN) {
	if (iN <= 1000) {
		return true;
	}
	return false;
}

int main(void) {
	int iN;
	int iScore;
	int iSum=0;
	int iMax=0;

	scanf("%d", &iN);
	if (isCondition(iN)) {
		for (int i = 0; i < iN; i++) {
			scanf("%d", &iScore);
			iSum = iSum + iScore;
			if (iMax < iScore) { iMax = iScore; }
		}
		float iAvr = ((float)iSum * 100 / (float)iMax ) / (float)iN;
		printf("%f", iAvr);

	}
	else return -1;
	return 0;

}