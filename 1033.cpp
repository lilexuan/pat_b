#include <cstdio>
#include <map>
#include <cstring>
using namespace std;

int main()
{
	char s1[60];
	char s2[100010];
	scanf("%s%s", s1, s2);
	// printf("%s\n%s\n", s1, s2);
	map<char, bool> mp;
	for (char c = 'A'; c <= 'Z'; c++) {
		mp[c + 32] = true;
		mp[c] = true;
	}
	for (char c = '0'; c <= '9'; c++) {
		mp[c] = true;
	}
	mp['_'] = true;
	mp[','] = true;
	mp['.'] = true;
	mp['-'] = true;
	mp['+'] = true;
	for (unsigned i = 0; i < strlen(s1); i++) {
		if (s1[i] == '+') {
			for (char c = 'A'; c <= 'Z'; c++) {
				mp[c] = false;
			}
		} 
		if (s1[i] >= 'A' && s1[i] <= 'Z'){
			mp[s1[i] + 32] = false;
		}
		mp[s1[i]] = false;
	}
	//test
	// printf("-----------------test-------------------\n");
	// map<char, bool>::iterator it = mp.begin();
	// for (; it != mp.end(); it++) {
	// 	printf("%c %d\n", it->first, it->second);
	// }
	// printf("-----------------test-------------------\n");
	for (unsigned i = 0; i < strlen(s2); i++) {
		if (mp[s2[i]]) {
			printf("%c", s2[i]);
		}
	}
	printf("\n");
	return 0;
}