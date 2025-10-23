#include <stdio.h>

int main() {
	char str[100];
	printf("Enter the string: ");
	scanf("%s", str);
	int vowel = 0, consonant = 0;
	int i = 0;
	while(str[i] != '\0') {
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'
			|| str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I'
			|| str[i] == 'O' || str[i] == 'U'
		) vowel++;
		else consonant++;
		i++;
	}
	printf("The number of vowels is %d and the number of consonants is %d\n", vowel, consonant);
}