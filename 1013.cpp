#include <cstdio>

using namespace std;

int main()
{
    int begin,end;
    scanf("%d%d",&begin,&end);
    bool is_prime(int num);
    int i=1,cnt=1;
    int prime[10001];
    while(cnt <= 10000){
        if(is_prime(i)){
            prime[cnt] = i;
            cnt ++;
        }
        i++;
    }
    int j = begin;
    while(j <= end) {
        int flag = 0;
        for (i = 0; i < 10; i++) {
            if (flag){
                printf(" %d",prime[j]);
                j++;
                if(j>end)
                    break;
            } else {
                flag = 1;
                printf("%d",prime[j]);
                j++;
                if(j>end)
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}

bool is_prime(int num)
{
    if(num == 2)
        return true;
    if(num == 1)
        return false;
    for(int i=2;i*i<=num;i++){
        if(num % i == 0)
            return false;
    }
    return true;
}
