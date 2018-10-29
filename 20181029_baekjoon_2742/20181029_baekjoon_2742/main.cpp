#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int iN) {
	if (iN <= 100000 && 0<=iN) {
		return 1;
	}
	else return 0;

}

int main(void) {
	int iInput;

	scanf("%d", &iInput);

	if (isCondition(iInput)) {
		for (int i = iInput; i > 0; i--) {
			printf("%d\n", i);
		}
	}
	else return -1;

	return 0;
}