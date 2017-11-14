//created by kelvin on 2017-5-30
//pat-b 1005
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int n_in_list(int n, int test_list[], int num);
bool cmp(int a, int b);

int main()
{
    int num;
    scanf("%d",&num);
    int test_list[num];
    int flag_array[101] = {0};
    int i,n;
    for(i = 0; i < num; i++) {
        scanf("%d",&(test_list[i]));
    }
    for(i = 0; i < num; i++) {
        flag_array[test_list[i]] = 1;
    }

    for (i = 0; i < num; i++) {
        n = test_list[i];
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
                if (n_in_list(n, test_list, num)) {
                    flag_array[n] = 2;
                }
            } else if (n % 2 == 1) {
                n = (3 * n + 1) / 2;
                if (n_in_list(n, test_list, num)) {
                    flag_array[n] = 2;
                }
            }
        }
    }

    vector<int> v;
    for (i = 1; i <= 100; i++) {
        if (flag_array[i] == 1) {
            v.push_back(i);
        }
    }

    sort(v.begin(), v.end(), cmp);
    vector<int>::iterator it = v.begin();
    printf("%d",*it);
    it++;
    for(;it != v.end(); it++)
        printf(" %d",*it);

    return 0;
}

int n_in_list(int n, int test_list[], int num)
{
    int i;
    for(i = 0; i < num; i++) {
        if(n == test_list[i])
            return 1;
    }
    return 0;
}

bool cmp(int a, int b)
{
    return a > b;
}
