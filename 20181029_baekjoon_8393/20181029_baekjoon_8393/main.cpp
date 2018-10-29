#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int iN) {
	if (1 <= iN && iN <= 10000) {
		return 1;
	}
	else return 0;
}

int main(void) {
	int iInput;
	int iSum = 0;
	scanf("%d", &iInput);
	
	if(isCondition(iInput)){
		for (int i = 1; i < iInput + 1; i++) {
			iSum = iSum + i;
		}
		printf("%d\n", iSum);
	}
	else return -1;


	return 0;
}