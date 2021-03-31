#include <stdio.h>

int main() 
{
	int num[11], i, j, temp;
	for (i = 0; i < 10; i++)
	{
         scanf("%d", &num[i]);
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (num[i] > num[j])
			{
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}
