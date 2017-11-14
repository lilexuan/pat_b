#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int upper_bound;
    upper_bound = 99999;
    scanf("%d",&upper_bound);
    if(upper_bound == 1){
        printf("0");
        return 0;
    }
    int sum = 0;
    vector<int> prime_list;
    bool prime(int a);
    int i;
    for(i=1;i<=upper_bound;i++){
        if(prime(i)){
            prime_list.push_back(i);
        }
    }
    vector<int>::iterator it = prime_list.begin();
    for(;(it+1) != prime_list.end();it++){
        if ((*(it+1) - *it) == 2)
            sum += 1;
    }
    printf("%d", sum);
    return 0;
}

bool prime(int a)
{
    if(a == 1 || a == 2 )
        return true;
    int i;
    for(i=2;i * i<=a;i++){
        if(a % i == 0)
            return false;
    }
    return true;
}

