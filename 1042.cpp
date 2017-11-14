#include <cstdio>
#include <cstring>
#include <map>
using namespace std;

int main()
{
	char s[1010];
	map<char, int> mp;
	for (char c = 'a'; c <= 'z'; c++) {
		mp[c] = 0;
	}
	gets(s);
	for (unsigned i = 0; i < strlen(s); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			mp[s[i]]++;
		} else if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
			mp[s[i]]++;
		}
	}
	char k = 'a';
	for (char c = 'a'; c <= 'z'; c++) {
		if (mp[k] < mp[c]) {
			k = c;
		}
	}
	printf("%c %d\n", k, mp[k]);
	return 0;
}