#include <stdio.h>

int main() {
	int n;
	int total = 0;

	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			total += i;
		}	
	}

	printf("Sum: %d\n", total);
	return 0;
}
