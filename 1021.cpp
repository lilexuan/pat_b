#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char s[3000];//居然要开这么大才过，300的都没过
    int count[10] = {0};
    scanf("%s", s);
    for (int i = 0; i < strlen(s); ++i) {
        count[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (!count[i])
            continue;
        else {
            printf("%d:%d\n", i, count[i]);
        }
    }
    return 0;
}

