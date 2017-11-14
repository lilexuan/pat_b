#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);
	int grade[101] = {0};
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		grade[tmp]++;
	}
	int k;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (i) {
			printf(" ");
		}
		printf("%d", grade[tmp]);
	}
	return 0;
}