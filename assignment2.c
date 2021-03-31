#include <stdio.h>
#include <math.h>

int main() 
{
	int v, seta;
	double res;
	printf("초기 속력, 발사각도 차례대로 입력 (띄어쓰기로 구분) : ");
	scanf("%d %d", &v, &seta);
	res = (2 * v * sin(seta)) / 9.8;
	printf("%.2lf초 후에 도착합니다.", res);
	return 0;
}
