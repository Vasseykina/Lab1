#include <stdio.h>

int main() {
	int a = -1;
	int max = 0;
	int e = 0;
	while (a != 0) {
		printf("Enter a \n");
		e = scanf("%d", &a);
		if (e != 1) {
			return -1;
		}
		if (a > max) {
			max = a;
		}

	}
	if (max) {
		printf("max= %d", max);
	
	}
	else {
		printf("Error");
	}
	return 0;
}