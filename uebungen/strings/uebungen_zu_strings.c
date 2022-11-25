#include <stdio.h>

int main(void) {

	char hallo[] = {'H', 'a', 'l', 'l', 'o', ' ', 'W', 'e', 'l', 't', '!', '\0'};

	printf("\n%s\n", hallo);

	printf("\n%c\n\n", hallo[4]);

	for(int i = 0; i< 11; i++){

		printf("%c", hallo[i]);
	}

	printf("\n\n");

	system("pause");

	return 0;
}
