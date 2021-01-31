#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;
const int Inf = 1e6;
const int Maxx = 1e2 + 7;
const int MaxN = 1e6;
char s0[Maxx]; //最短串的枚举子串
char st[MaxN][Maxx]; //最短串所有子串的集合
char str[MaxN][Maxx]; //最短串所有子串的反序
int cas;
int n;

int main() {
    char s[Maxx][Maxx];
    scanf("%d", &cas);
    while(cas--) {
        int minl = Inf;
        int maxl = 0;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++) scanf("%s", s[i]);
        for(int i = 1; i <= n; i++) {
            if(strlen(s[i]) < minl) minl = strlen(s[i]);
        }
        int pos; //最短串位置
        for(int i = 1; i <= n; i++) {
            if(strlen(s[i]) == minl) {
                pos = i;
                break;
            }
        }
        int i, j;
        int p = 0; //记录子串个数
        for(i = 0; i < minl; i++) {
            for(j = i; j < minl; j++) {
                for(int k = i; k <= j; k++) s0[k - i] = s[pos][k]; //暴力枚举子串
                s0[j - i + 1] = '\0';
                p++;
                int l0 = strlen(s0);
                for(int k = 0; k < l0; ++k) st[p][k] = s0[k]; //最短串所有子串
                for(int k = 0, a = l0 - 1; k < l0, a >= 0; ++k, --a) str[p][a] = s0[k]; //最短串所有子串反序
            }
        }
        //for(int i = 1; i <= p; i++) printf("%s %s\n", st[i], str[i]);
        for(int i = 1; i <= p; i++) {
            bool flg = 1;
            for(int j = 1; j <= n; j++) {
                if(strstr(s[j], st[i]) == 0 && strstr(s[j], str[i]) == 0) {
                    flg = 0;
                    break;
                }
            }
            if(flg) {
                int len = strlen(st[i]);
                maxl = max(maxl, len);
            }
        }
        printf("%d\n", maxl);
    }
    return 0;
}
