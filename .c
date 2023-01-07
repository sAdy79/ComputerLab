#include <stdio.h>

int main(int argc, char *argv[])
{
	long first = 1, second = 1, temp;
	int n, digit = 0;
	scanf("%d", &n);
	for (int i = 1 ; i <= n ; i++) {
		//printf("%d %ld %ld\n", i, first, (first * first)%10);
		digit += (first * first) % 10;
		temp = first + second;
		first = second;
		second = temp;
	}
	printf("%d",digit%10);
}
