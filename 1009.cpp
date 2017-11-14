#include <cstdio>
#include <stack>
#include <cstring>

using namespace std;

int main()
{
    char s[81];
    fgets(s,81,stdin);
    const char *delim = " \n";
    char *p;
    p = strtok(s,delim);
    stack<char*> st;
    st.push(p);
    while(p){
        p = strtok(NULL,delim);
        if(p)
            st.push(p);
    }
    printf("%s",st.top());
    st.pop();
    while(st.empty() != true){
        printf(" %s",st.top());
        st.pop();
    }
    return 0;
}
