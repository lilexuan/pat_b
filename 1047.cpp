#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);
	int grade[1001][11] = {0};
	for (int i = 0; i < n; i++) {
		int team, member, mark;
		scanf("%d-%d%d", &team, &member, &mark);
		grade[team][member] = mark;
	}
	int max = 0, max_team;
	for (int i = 0; i < 1001; i++) {
		int sum = 0;	
		for (int j = 0; j < 11; j++) {
			sum += grade[i][j];
		}
		if (sum > max) {
			max_team = i;
			max = sum;
		}
	}
	printf("%d %d\n", max_team, max);
	return 0;
}