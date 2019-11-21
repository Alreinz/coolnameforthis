
#include <stdio.h>

int main () {
	int password;
	printf("Hello World\n");
	
	printf("This is another change\n");

	printf("Enter login password (password is 123)\n");
	scanf("%d", &password);
	
	if ( password == 123 ) {
		printf("Success");
	}
	
	return 0;
}
