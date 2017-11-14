#include <cstdio>
#include <cstring>

char c[6] = {'P', 'A', 'T', 'e', 's', 't'};

bool allzero(int PATest[]) {
	bool flag = true;
	for (int i = 0; i < 6; i++) {
		if (PATest[i]) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	char str[10010];
	scanf("%s", str);
	int PATest[6];
	for (unsigned i = 0; i < strlen(str); i++) {
		switch (str[i]) {
			case 'P' :
				PATest[0]++;
				break;
			case 'A' :
				PATest[1]++;
				break;
			case 'T' :
				PATest[2]++;
				break;
			case 'e' :
				PATest[3]++;
				break;
			case 's' :
				PATest[4]++;
				break;
			case 't' :
				PATest[5]++;
				break;
		}
	}
	while (!allzero(PATest)) {
		for (int i = 0; i < 6; i++) {
			if (PATest[i]) {
				printf("%c", c[i]);
				PATest[i]--;
			}
		}
	}
	return 0;
}