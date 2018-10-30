#include <stdio.h>

bool isCondition(int iN) {
	if (0 <= iN&&iN <= 99) {
		return 1;
	}
	else return 0;
}

int main(void) {
	int iN;
	int itmp;
	int icnt = 0;

	scanf("%d", &iN);
	if (isCondition(iN)) {
		itmp = iN;
		while (1) {
			icnt++;
			int num1 = (int)itmp / 10;
			int num2 = itmp - num1*10;
			int num3 = num1 + num2;
			int num4 = (int)num3 / 10;
			int num5 = num3 - num4 * 10;
			itmp = num2 * 10 + num5;
			if (itmp == iN) { break; }		
			
		}
		printf("%d\n", icnt);
	}
	else return -1;
	return 0;
}