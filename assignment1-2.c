#include <stdio.h>

int main() {
	int num1, num2, res, res1;
	char t;
	while (1)
	{
		printf("입력 : ");
		scanf("%d %c %d", &num1, &t, &num2);

		switch (t)
		{
		case '+': res = num1 + num2; break;
		case '-': res = num1 - num2; break;
		case '*': res = num1 * num2; break;
		case '/': res = num1 / num2; res1 = num1 % num2; break;
		}

		if (t == '/')
		{
			printf("%d %c %d = %d ... %d\n", num1, t, num2, res, res1);
		}
		else
		{
			printf("%d %c %d = %d\n", num1, t, num2, res);
		}
	}
	return 0;
}
