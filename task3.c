#include <stdio.h>

int main() {
	int marks[10], pass[10];
	for(int i = 0; i < 10; i++) {
		marks[i] = pass[i] = -1;
	}
	for(int i = 0; i < 10; i++) {
		printf("Enter the marks of student %d: ", i + 1);
		scanf("%d", &marks[i]);
		if(marks[i] == -1) {
			break;
		}
		if(marks[i] >= 5) pass[i] = 1;
	}
	int passCnt = 0, failCnt = 0, passSum = 0, failSum = 0;
	for(int i = 0; i < 10; i++) {
		if(marks[i] == -1) {
			break;
		}
		if(pass[i] == 1) {
			passCnt++;
			passSum += marks[i];
		} else {
			failCnt++;
			failSum += marks[i];
		}
	}
	if(passCnt > 0) {
		printf("Average of passed students is %.2f\n", 1.0 * passSum / passCnt);
	} else {
		printf("No student passed!\n");
	}
	
	if(failCnt > 0) {
		printf("Average of failed students is %.2f\n", 1.0 * failSum / failCnt);
	} else {
		printf("No student failed!\n");
	}
}