#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n,f1=1,f2=1,c;
	scanf_s("%d", &n);
	if (n > 0)
	{
		printf("1 1");
		for (int i = 0; i <= n; i++)
		{

			c = f1 + f2;
			if (c <= n)
			{
				f1 = f2;
				f2 = c;
				printf(" %d", c);
			}

		}
	}
	else
		printf("ERROR");
	
	printf("\n");
	system("Pause");
}