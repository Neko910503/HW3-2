#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int I=1;
	while (I)
	{
		char b;
		scanf_s("%c", &b);
		if (b >= 'A' && b <= 'Z')
		{
			b = b + 32;
			printf("%c", b);
		}

		else if (b >= 'a' && b <= 'z')
		{
			b = b - 32;
			printf("%c", b);
		}
	}
			system("pause");
		return 0;
}