#include <cstdio>

int main()
{
	int number[10] = {0};
	for (int i = 0; i < 10; i++) {
		int tmp;
		scanf("%d", &tmp);
		number[i] = tmp;
	}
	for (int i = 1; i < 10; i++) {
		if (number[i]) {
			printf("%d", i);
			number[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		while (number[i]--) {
			printf("%d", i);
		}
	}	
	return 0;
}