#include <stdio.h>
#include <stdlib.h>

int main() {
	int temp;
	int nums_1 = 1;
	int nums_2 = 2;
	int total = 0;

	while (nums_2 < 4000000) {
		if (nums_2 % 2 == 0) {
			total += nums_2;
		}
		
		temp = nums_1;
		nums_1 = nums_2;
		nums_2 = temp + nums_1;
	}

	printf("Total: %d\n", total);
	return 0;
}
