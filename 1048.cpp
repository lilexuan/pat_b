#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

char sym[13] {
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'
};

int value(char S[], int i);

int main()
{
    char A[101] = {0}; // 初始化为零非常重要！不然reverse的时候会出错
    char B[101] = {0};
    char result[101] = {0};
    scanf("%s%s", A, B);
    reverse(A, A + strlen(A));
    reverse(B, B + strlen(B));
    int len = max(strlen(A), strlen(B));
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            result[i] = sym[(value(A, i) + value(B, i)) % 13];
        } else {
            if (value(B, i) - value(A, i) < 0) {
                result[i] = sym[value(B, i) - value(A, i) + 10];
            } else {
                result[i] = sym[value(B, i) - value(A, i)];
            }
        }
    }
    reverse(result, result + strlen(result));
    puts(result);
    return 0;
}

int value(char S[], int i)
{
    if (i >= strlen(S)) {
        return 0;
    } else {
        return (S[i] - '0');
    }
}


