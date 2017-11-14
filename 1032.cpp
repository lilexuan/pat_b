#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int old_n = n;
    int a[n+1] = {0};
    int num,perform;
    while (n--){
        scanf("%d%d",&num,&perform);
        a[num] += perform;
    }
    int flag = 0, max = 0;
    for(int i=0;i<old_n+1;i++){
        if(a[i] > max){
            flag = i;
            max = a[i];
        }
    }
    printf("%d %d",flag,a[flag]);
    return 0;
}

