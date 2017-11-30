#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	bool leftSmall[n] = {false}, rightBig[n] = {false};
	for (int i = 0; i < n; i++) {
		bool flag = true;
		if (i == 0) {
			leftSmall[i] = true;
		} else {
			for (int j = i - 1; j >= 0; j--) {
				if (a[j] > a[i]) {
					leftSmall[i] = false;
					flag = false;
					break;
				} else if (leftSmall[j] == true) {
					leftSmall[i] = true;
					break;
				}
			}
		}
		if (flag) {
			leftSmall[i] = true;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		bool flag = true;
		if (i == n - 1) {
			rightBig[i] = true;
		} else {
			for (int j = i + 1; j < n; j++) {
				if (a[j] < a[i]) {
					rightBig[i] = false;
					flag = false;
					break;
				} else if (leftSmall[j] == true) {
					rightBig[i] = true;
					break;
				}
			}
		}
		if (flag) {
			rightBig[i] = true;
		}
	}
	int index = 0, ans[n];
	for (int i = 0; i < n; i++) {
		// printf("i=%d leftSmall=%d rightBig=%d\n", i, leftSmall[i],rightBig[i]);
		if (leftSmall[i] && rightBig[i]) {
			ans[index++] = a[i];
		}
	}
	printf("%d\n", index);
	sort(ans, ans + index);
	for (int i = 0; i < index; i++) {
		if (i) {
			printf(" ");
		}
		printf("%d", ans[i]);
	}
	printf("\n");
	return 0;
}