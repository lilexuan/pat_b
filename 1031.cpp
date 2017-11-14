#include <cstdio>

using namespace std;

int main()
{
    int weight[17] = {
            7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2
    };
    char M[11] = {
            '1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'
    };
    int n;
    scanf("%d", &n);
    int flag = 1;
    while (n--) {
        char id[18];
        scanf("%s", id);
        int sum = 0;
        for (int i = 0; i < 17; i++) {
            sum += (id[i] - '0') * weight[i];
        }
        int Z = sum % 11;
        if(id[17] != M[Z]) {
            printf("%s\n", id);
            flag = 0;
        }
    }
    if(flag)
        printf("All passed\n");
    return 0;
}

