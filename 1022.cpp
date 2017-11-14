#include <cstdio>

using namespace std;

int main()
{
    int A, B, D;
    scanf("%d%d%d", &A, &B, &D);
    int sum = A + B;
    int result[200] = {0}, num = 0;
    do {
        result[num++] = sum % D;
        sum /= D;
    } while (sum);
    for (int i = num - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    return 0;
}
