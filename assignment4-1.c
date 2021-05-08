#include <stdio.h>

int main()
{
	char str[80];
	printf("입력 : ");
	gets(str);
	for (int i = 0; i < 80; i++)
	{
		if (str[i] == '\0') break;
		if (str[i] == ' ')
		{
			str[i + 1] = (int)str[i + 1] - 32;
		}
		printf("%c", str[i]);
	}
	return 0;
}
