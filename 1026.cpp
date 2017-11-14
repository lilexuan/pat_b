#include <cstdio>

using namespace std;

int main()
{
    long long c1,c2;
    scanf("%lld%lld",&c1,&c2);
    int time = (int)((double)(c2 - c1) / 100.0 + 0.5);
    int hour,minute,second;
    hour = time / (60 * 60);
    minute = (time - hour * 3600) / 60;
    second = time - (3600 * hour + 60 * minute);
    printf("%02d:%02d:%02d",hour,minute,second);
    return 0;
}

