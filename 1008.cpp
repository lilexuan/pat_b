#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int array_num;
    int move_num;
    scanf("%d %d",&array_num,&move_num);
    vector<int> vi;
    int i;
    int tmp;
    for(i=0;i<array_num;i++){
        scanf("%d",&tmp);
        vi.push_back(tmp);
    }
    for(i=0;i<move_num;i++){
        tmp = vi[array_num-1];
        vi.pop_back();
        vi.insert(vi.begin(),tmp);
    }
    vector<int>::iterator it = vi.begin();
    printf("%d",*it);
    it++;
    for(;it != vi.end();it++){
        printf(" %d",*it);
    }
    return 0;
}
