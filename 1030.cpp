#include <cstdio>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) 
{
	return a < b;
}

int main()
{
	int n, p;
	scanf("%d%d", &n, &p);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n, cmp);	
	long long target = a[0] * p;
	int left = 0, right = n, middle;
	while (left < right) {
		middle = (left + right) / 2;
		if (a[middle] > target) {
			right = middle;
		} else {
			left = middle + 1;
		}
	}
	printf("%d\n", left);
	return 0;
}