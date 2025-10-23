#include <stdio.h>

int main() {
	int arr[10];
	int mx = -1e9, mn = 1e9;
	for(int i = 0; i < 10; i++) {
		printf("Enter the number #%d: ", i + 1);
		scanf("%d", &arr[i]);
		if(arr[i] > mx) mx = arr[i];
		if(arr[i] < mn) mn = arr[i];
	}
	printf("Maximum is %d\n", mx);
	printf("Minimum is %d\n", mn);
	printf("The difference (max - min) is: %d\n", mx - mn);
}