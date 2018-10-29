#include<stdio.h>
#include<stdlib.h>
#include<iostream>


bool isCondition(int iLength) {
	if (0 < iLength && iLength < 100) {
		return 1;
	}
	else return 0;
}

int main(void) {

	int icnt=0;
	int icnt2 = 0;
	char chInput[100];
	scanf("%s", chInput);

	while (chInput[icnt] != '\0') {
		icnt++;
	}
	
	if (isCondition(icnt)) {
		for (int i = 0; i < icnt; i++) {
			
			printf("%c", chInput[i]);
			icnt2++;
			if (icnt2 == 10) {
				printf("\n");
				icnt2 = 0;
			}
		}
	}
	else return -1;

	return 0;
}