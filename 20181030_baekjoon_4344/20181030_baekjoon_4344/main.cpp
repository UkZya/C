#include<stdio.h>
#include<stdlib.h>
#include<iostream>


int main(void) {

	int iTest;
	int iNumStu;
	int iScore;
	int arriScore[1000];
	int iSum = 0;
	float fAvr = .0;
	int icnt = 0;
	scanf("%d", &iTest);

	for (int i = 0; i < iTest; i++) {
		iSum = 0;
		icnt = 0;
		scanf("%d", &iNumStu);
		for (int j = 0; j < iNumStu; j++) {
			scanf("%d", &iScore);
			arriScore[j] = iScore;
			iSum = iSum + iScore;
		}
		fAvr = (float)iSum / (float)iNumStu;
		for (int j = 0; j < iNumStu; j++) {
			if (arriScore[j] > fAvr) {
				icnt++;
			}			
		}
		float fPercent = (float)icnt / (float)iNumStu * 100;
		printf("%.3f%%\n", fPercent);
		
	}
	return 0;
}