#include <stdio.h>
#include <stdlib.h>
#include <iostream>

bool isCondition(int ix, int iy) {
	if (1 <= ix && ix <= 12 && 1 <= iy && iy <= 31) {
		return 1;
	}
	else return 0;
}

int main(void) {
	int im, id;
	int iDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int iDaySum = 0;
	int iQuo = 0;
	int iRem = 0;

	char* iDayofWeek[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

	scanf("%d %d", &im, &id);
	if (isCondition(im, id)) {
		for (int i = 1; i < im; i++) {
			iDaySum = iDay[i - 1] + iDaySum;
		}
		iDaySum = iDaySum + id;
		iQuo = (int)(iDaySum / 7);
		iRem = iDaySum - (iQuo * 7);
		if (iRem == 0) {
			printf("%s\n", iDayofWeek[6]);
		}
		else printf("%s\n", iDayofWeek[iRem-1]);
	}
	else return -1;

	return 0;
}