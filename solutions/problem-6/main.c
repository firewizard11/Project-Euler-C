#include <stdio.h>
#include <math.h>


int sum_of_squares(int n);
int square_of_sum(int n);


int main() {
	int n;
	int sum_squares, square_sum;

	printf("Enter n: ");
	scanf("%d", &n);

	sum_squares = sum_of_squares(n);
	square_sum = square_of_sum(n);

	printf("Sum of Squares: %d\n", sum_squares);
	printf("Square of Sum: %d\n", square_sum);
	printf("Difference: %d\n", square_sum - sum_squares);
}


int sum_of_squares(int n) {
	int result = 0;

	for (int i = 1; i <= n; i++) {
		result += pow(i, 2);
	}
	
	return result;
}

int square_of_sum(int n) {
	int sum = 0;
	int result;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	result = pow(sum, 2);
	return result;

}
