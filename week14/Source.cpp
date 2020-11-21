#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int min = 1e9, max = -1e9;
	int in[10];
	int* p = in;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &in[i]);

	}
	for (int i = 0; i < 10; i++)
	{
		if (*(p + i) < min) min = *(p + i);
		if (*(p + i) > max) max = *(p + i);
	}
	printf("%d %d", min, max);




	return 0;
}