
#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);

	int div = 0;

	while (1) {
		if ((N % 5) == 0) {
			div += N / 5;
			printf("%d\n", div);
			break;
		}

		N -= 3;
		div++;

		if (N < 0) {
			printf("-1\n");
			break;
		}
	}

}