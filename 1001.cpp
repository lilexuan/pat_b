#include<cstdio>
using namespace std;

int cut(int n, int result);

int main()
{
	int n,result = 0;
	scanf("%d",&n);
	result = cut(n,result);
	printf("%d",result);
	return 0;
}

int cut(int n,int result)
{
	if(n == 1)
		return result;
	else {
		if (n % 2 == 0){
			n /= 2;
			result++;
			result = cut(n,result);
		} else {
			n = (3 * n + 1)/2;
			result++;
			result = cut(n,result);
		}
	}
}
