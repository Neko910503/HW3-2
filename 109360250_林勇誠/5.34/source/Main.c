#include <stdio.h>
#include <stdlib.h>

double p(double, int);

int cifang(int n, int k)
{

	if (k == 0)
		return 1;

	else if (k == 1)
		return n;

	else
		return n * cifang(n, k - 1);
}


int main()
{
	int x, y;//y��ܦh�֦���
	printf("�p��x��y����?�п�Jx=?y=?");
	scanf_s("%d %d", &x, &y);
	printf("%d\n", cifang(x, y));
	return 0;
}