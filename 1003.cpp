#include <cstdio>
#include <cstring>

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char str[120];
		scanf("%s", str);
		int len = strlen(str), p_pos, t_pos, p_num = 0, t_num = 0, other_num = 0, a_num = 0;
		for (int i = 0; i < len; i++) {
			if (str[i] == 'A') {
				a_num++;
				continue;
			} else if (str[i] == 'P') {
				p_num++;
				p_pos = i;
			} else if (str[i] == 'T') {
				t_num++;
				t_pos = i;
			} else {
				other_num++;
			}
		}
		if (p_num != 1 || t_num != 1 || other_num != 0 || a_num == 0) {
			printf("NO\n");	
			continue;
		}
		int x = p_pos, y = t_pos - p_pos - 1, z = len - t_pos - 1;
		if (z - x * (y - 1) == x) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}