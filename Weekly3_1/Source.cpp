#include<stdio.h>
int main() {
	int a, b, c, d, sum = 0;
	printf("Enter first number : ");
	scanf_s("%d", &a);
	printf("Enter second number : ");
	scanf_s("%d", &b);
	printf("Enter third number : ");
	scanf_s("%d", &c);
	printf("Enter fourth number : ");
	scanf_s("%d", &d);
	if (a % 2 == 0) {
		sum = sum + 1;
	}
	if (b % 2 == 0) {
		sum = sum + 1;
	}
	if (c % 2 == 0) {
		sum = sum + 1;
	}
	if (d % 2 == 0) {
		sum = sum + 1;
	}
	else { sum = 0; }
	if (sum > 1) {
		printf("There are %d even number", sum);
	}
	else if (sum == 1)
	{
		printf("There is %d even number", sum);
	}
	else {
		printf("Not found even number");
	}
	return 0;
}