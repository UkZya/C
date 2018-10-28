#include <iostream>
#include <math.h>

#define UPLIMIT 10000
#define BOLIMIT -10000

typedef struct _testcase {
	int ix1;
	int ix2;
	int iy1;
	int iy2;
	int ir1;
	int ir2;
}testcase;


bool isCondition(testcase stTC) {
	if (BOLIMIT <= stTC.ix1 && stTC.ix1 <= UPLIMIT && BOLIMIT <= stTC.ix2 && stTC.ix2 <= UPLIMIT &&
		BOLIMIT <= stTC.iy1 && stTC.iy1 <= UPLIMIT && BOLIMIT <= stTC.iy2 && stTC.iy2 <= UPLIMIT &&
		stTC.ir1 <= UPLIMIT && stTC.ir2 <= UPLIMIT) {
		return 1;
	}
	else {
		return 0;
	}

}

int main(void) {
	int iTestCase = 0;
	int iOutput = 0;

	testcase *stTC;

	scanf("%d", &iTestCase);
	stTC = (testcase*)malloc(sizeof(testcase) * iTestCase);
	for (int i = 0; i < iTestCase; i++) {
		scanf("%d", &stTC[i].ix1);
		scanf("%d", &stTC[i].iy1);
		scanf("%d", &stTC[i].ir1);
		scanf("%d", &stTC[i].ix2);
		scanf("%d", &stTC[i].iy2);
		scanf("%d", &stTC[i].ir2);
		if (isCondition(stTC[i])) {
			continue;
		}
		else {
			printf("Out of condition!!\n");
			return -1;
		}
	}

	for (int i = 0; i < iTestCase; i++) {
		double dxDiff = 0;
		double dyDiff = 0;
		double drDiff = 0;
		double drDiff2 = 0;
		int iOutput = 0;

		dxDiff = stTC[i].ix1 - stTC[i].ix2;
		dyDiff = stTC[i].iy1 - stTC[i].iy2;
		
		dxDiff = dxDiff * dxDiff;
		dyDiff = dyDiff * dyDiff;

		drDiff = sqrt(dxDiff + dyDiff);
		
		if (stTC[i].ix1 == stTC[i].ix2 && stTC[i].iy1 == stTC[i].iy2 && stTC[i].ir1 != stTC[i].ir2) {
			iOutput = 0;
			printf("%d\n", iOutput);
			continue;
		}
		else if (stTC[i].ix1 == stTC[i].ix2 && stTC[i].iy1 == stTC[i].iy2 && stTC[i].ir1 == stTC[i].ir2) {
			iOutput = -1;
			printf("%d\n", iOutput);
			continue;		
		}
		drDiff2 = stTC[i].ir1 + stTC[i].ir2;

		if (drDiff == drDiff2 || abs(stTC[i].ir1 - stTC[i].ir2) == drDiff) {
			iOutput = 1;
		}
		else if (drDiff < drDiff2 && abs(stTC[i].ir1 - stTC[i].ir2) < drDiff) {
			iOutput = 2;
		}
		else {
			iOutput = 0;
		}

		printf("%d\n", iOutput);
	}
	return 0;
}