#include <cstdio>

using namespace std;

int main()
{
    int num;
    scanf("%d",&num);
    int B, S, G; // 百位，十位，个位
    B = num / 100;
    S = (num - B * 100) / 10;
    G = num % 10;
    // printf("%d %d %d", B, S, G); // test
    if(B != 0) {
        for(int i=0;i<B;i++)
            printf("B");
    }
    if(S != 0) {
        for(int i=0;i<S;i++)
            printf("S");
    }
    if(G != 0) {
        for(int i=0;i<G;i++)
            printf("%d",i+1);
    }

    return 0;
}
