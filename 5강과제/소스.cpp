#include <stdio.h>

int main(void)
{
	int a, b, max, min;

	printf("���� �ΰ��� �Է��Ͻÿ�: ");
	scanf_s("%d%d", &a, &b);

	max = (a > b) ? a : b;
	min = (a > b) ? b : a;

	printf("ū ���� �������� ���� ��:     %d\n", max / min);
	printf("ū ���� �������� ���� ������: %d\n", max % min);

	return 0;

}