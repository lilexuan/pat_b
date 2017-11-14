#include <cstdio>

using namespace std;


int main()
{
    int num;
    char sout;
    scanf("%d %c",&num,&sout);
    int i;
    int sum=0;
    int dif;
    int k;
    int j;
    int x;
    //if(num<7)
    //{
    //	printf("*\n%d",num-1);
    //}
    //else
    //{
    for(i=1;sum<=num;i=i+2)
    {
        if(i==1) sum+=i;
        else sum+=i*2;
    }
    i = i - 2;
    sum = sum - i*2;
    i = i -2;
    k = i;
    dif = num - sum;
    for(x=0;i>0;i=i-2,x++)
    {
        for(j=k;j>x;j--)
        {
            if(j>(k-x)) printf(" ");
            else printf("%c",sout);
        }
        printf("\n");
    }
    for(i=3;i<=k;i=i+2)
    {
        x=(k-i)/2;
        for(j=k;j>x;j--)
        {
            if(j>(k-x)) printf(" ");
            else printf("%c",sout);
        }
        printf("\n");
    }
    printf("%d",dif);
    //}
    return 0;
}
