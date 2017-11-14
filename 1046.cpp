#include <cstdio>

using namespace std;

int main()
{
    int N;
    scanf("%d",&N);
    int A_mouth, A_hand, B_mouth, B_hand,A_count = 0, B_count = 0;
    while (N--){
        scanf("%d%d%d%d",&A_mouth,&A_hand,&B_mouth,&B_hand);
        if (A_hand == (A_mouth + B_mouth) && B_hand != (A_mouth + B_mouth))
            B_count++;
        if (B_hand == (A_mouth + B_mouth) && A_hand != (A_mouth + B_mouth))
            A_count++;
    }
    printf("%d %d",A_count,B_count);
    return 0;
}

