#include <iostream>

bool isCondition(int iSrc, int iSrc2) {
	if (0 < iSrc && iSrc < 10 && iSrc2 < 10 && 0 < iSrc2) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(void) {
	int iA;
	int iB;
	
	iA = 0;
	iB = 0;
	
	scanf("%d %d", &iA, &iB);

	if (isCondition(iA, iB)) {
		printf("%d\n", iA - iB);
		return 0;
	}
	else {
		printf("Out of condition\n");
		return 1;
	}
}