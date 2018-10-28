#include <iostream>

bool isCondition(int iSrc, int iSrc2) {
	if (0 < iSrc && iSrc < 10 && 0 < iSrc2 && iSrc2 < 10) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(void) {
	int iA;
	int iB;
	int iDst;

	//initialize 
	iA = 0;
	iB = 0;
	iDst = 0;

	//get the input number
	scanf("%d %d", &iA, &iB);

	//check condition
	if (isCondition(iA, iB)) {
		iDst = iA + iB;
	}
	else {
		printf("Out of condition\n");
		return 0 ;
	}
	printf("%d\n", iDst);
	return 0 ;
}

