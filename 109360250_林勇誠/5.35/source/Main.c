#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned long a1 = 0, a2 = 1, d = 0, a, i = 0;
	printf("請輸入列印費氏數列到第n位。n=?");
	scanf_s("%d", &a);
	printf("0  \n1  \n");
	if (a > 1)
	{
		while (i < a - 2)
		{
			d = a2;
			a2 = a2 + a1;
			printf("%d  \n", a2);
			a1 = d;
			i++;
		}
	}
	system("pause");
	return 0;
}