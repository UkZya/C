#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int iN) {
	if (1 <= iN && iN <= 100) {
		return 1;
	}
	else return 0;	
}

int main(void){
	int iInput;

	scanf("%d", &iInput);

	if (isCondition(iInput)) {
		for (int i = iInput; i > 0; i--) {
			for (int j = 1; j < i + 1; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else return -1;

	return 0;
}