#include <cstdio>

using namespace std;

struct people {
    char name[10];
    int year, month, day;
    bool legal;
};

bool compare(people a, people b);

int main()
{
    int n;
    scanf("%d",&n);
    people p[n], max, min;
    max.day = max.month = max.year = 0;
    min.day = min.month = min.year = 3000;
    for (int i = 0; i < n; i++) {
        scanf("%s%d/%d/%d", p[i].name, &p[i].year, &p[i].month, &p[i].day);
        if (p[i].year > 2014 || p[i].year < 1814)
            p[i].legal = false;
        else if (p[i].year == 2014 && p[i].month > 9)
            p[i].legal = false;
        else if (p[i].year == 2014 && p[i].month == 9 && p[i].day > 6)
            p[i].legal = false;
        else if (p[i].year == 1814 && p[i].month < 9)
            p[i].legal = false;
        else if (p[i].year == 1814 && p[i].month == 9 && p[i].day < 6)
            p[i].legal = false;
        else
            p[i].legal = true;
        if (p[i].legal) {
            if (compare(p[i], max))
                max = p[i];
            if (!compare(p[i], min))
                min = p[i];
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(p[i].legal)
            cnt++;
    }
    if(cnt)
        printf("%d %s %s", cnt, min.name, max.name);
    else
        printf("0");
    return 0;
}

bool compare(people a, people b)
{
    if (a.year < b.year)
        return false;
    else if (a.year > b.year)
        return true;
    if (a.month < b.month)
        return false;
    else if (a.month > b.month)
        return true;
    if (a.day < b.day)
        return false;
    else if (a.day > b.day)
        return true;
}
