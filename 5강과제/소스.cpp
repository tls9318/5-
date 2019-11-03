#include <stdio.h>

int main(void)
{
	int a, b, max, min;

	printf("정수 두개를 입력하시오: ");
	scanf_s("%d%d", &a, &b);

	max = (a > b) ? a : b;
	min = (a > b) ? b : a;

	printf("큰 수를 작은수로 나눈 몫:     %d\n", max / min);
	printf("큰 수를 작은수로 나눈 나머지: %d\n", max % min);

	return 0;

}