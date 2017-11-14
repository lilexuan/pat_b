#include <cstdio>
#include <vector>
#include <cmath>
// 居然在pat上面通过了，在codeup上面超时，看来有改进的地方，具体请看codeup10000575G
using namespace std;

int main()
{
    int tmp,n=0,cnt_a4=0;
    int flag = 0;
    vector<int> vi;
    do{
        scanf("%d",&tmp);
        vi.push_back(tmp);
    } while(getchar() != '\n');
    int A[6] = {0};
    vector<int>::iterator it = vi.begin();
    it++;
    for(;it != vi.end();it++){
        if(*it % 2 == 0 && *it % 5 == 0)
            A[1] += *it;
        else if (*it % 5 == 1){
            A[2] += pow(-1,n) * *it;
            n++;
            flag = 1;
        }
        else if (*it % 5 == 2){
            A[3] ++;
        }
        else if (*it % 5 == 3){
            A[4] += *it;
            cnt_a4 ++;
        }
        else if (*it % 5 == 4 && *it > A[5]){
            A[5] = *it;
        }
    }
    int i=1;
    if(A[i] == 0)
        printf("N");
    else
        printf("%d",A[i]);
    i++;
    for(;i<6;i++){
        if(A[i] == 0){
            if(i == 2 && flag == 1){
                printf(" %d",A[i]);
            }
            else
                printf(" N");
        }
        else if (i != 4)
            printf(" %d",A[i]);
        else if (i == 4)
            printf(" %.1f",(double)A[i]/(double)cnt_a4);
    }
    return 0;
}
