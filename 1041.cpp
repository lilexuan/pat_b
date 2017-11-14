#include <cstdio>
#include <cstring>

struct student {
    char num[15];
    int seat;
};

int main()
{
    int n;
    scanf("%d",&n);
    student s[n+1];
    for (int i = 1; i <= n; i++){
        char num[15];
        scanf("%s",num);
        int pre_seat;
        scanf("%d",&pre_seat);
        scanf("%d",&s[pre_seat].seat);
        strcpy(s[pre_seat].num,num);
    }
    int m;
    scanf("%d",&m);
    for (int i = 0;i < m; i++) {
        int pre_seat;
        scanf("%d",&pre_seat);
        printf("%s %d\n",s[pre_seat].num,s[pre_seat].seat);
    }
    return 0;
}
