#include <stdio.h>

int main() {
	char str[100];
	printf("Enter the string: ");
	scanf("%[^\n]", str);
	for(int i = 0; i < 100 && str[i] != '\0'; i++) {
		if(str[i] >= 'a') {
			
			int dist = str[i] - 'a';
			if(dist >= 0 && dist < 26) {
				str[i] = 'A' + dist;
			}
		} else {
			int dist = str[i] - 'A';
			if(dist >= 0 && dist < 26) {
				str[i] = 'a' + dist;
			}
		}
	}
	printf("%s\n", str);
}