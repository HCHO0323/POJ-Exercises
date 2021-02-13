#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool cmp(const char *elem1, const char *elem2)
{
    if (strcmp(elem1, elem2) < 0)
        return true;
    return false;
}

int main()
{
    char str[100][100];
    char *pStr[100] = {NULL};    // use *pstr become 1 deminsion.  then we can use it to complete.
    int n, i;
    while (cin>>n)
    {
        for (i=0; i<n; ++i)
        {
            cin>>str[i];
            pStr[i] = str[i];
         }
        sort(pStr, pStr+n, cmp);
        for (i=0; i<n; ++i)
            cout<<pStr[i]<<endl;
    }
    return 0;
}
