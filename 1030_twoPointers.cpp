#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	int i = 0, j = 0, ans = 1;
	while (i < n && j < n) {
		while (j < n && a[j] <= (long long)a[i] * m) {
			ans = max(ans, j - i + 1);
			j++;
		}
		i++;
	}
	printf("%d\n", ans);
	return 0;
}