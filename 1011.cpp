#include <cstdio>

using namespace std;

int main()
{
    long long a,b,c;
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%lld%lld%lld",&a,&b,&c);
        if((a+b)>c){
            printf("Case #%d: true\n",i+1);
        } else {
            printf("Case #%d: false\n",i+1);
        }
    }
    return 0;
}
