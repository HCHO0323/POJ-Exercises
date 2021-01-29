#include<iostream>
#include<string.h>
 
using namespace std;
 
char a[200];
char b[200];
 
void input() {
    cin >> a >> b;
}
 
void add() {
    int lenA = strlen(a);
    int lenB = strlen(b);
    char sum[201];
    int t,cnt;
    if(lenA >= lenB) {
        t = 0;
        cnt = 0;
        for(int i = lenA - 1, j = lenB -1; i >= 0 ; i -- , j--){
            int s;
            if(j < 0) {
                s = (a[i] -'0' + 0) + cnt;
            }else {
                s = (a[i] -'0' + 0) + (b[j] - '0' + 0) + cnt;
            }
            sum[t ++] = (s % 10) + '0';
            if(s >= 10) {
                cnt = s / 10;
            }else {
                cnt = 0;
            }
        }
 
    }else {
        t = 0;
        cnt = 0;
        for(int i = lenB - 1, j = lenA-1; i >= 0 ; i -- , j--){
            int s;
            if(j < 0) {
                s = (b[i] -'0' + 0) + cnt;
            }else {
                s = (b[i] -'0' + 0) + (a[j] - '0' +0) + cnt;
            }
            sum[t ++] = (s % 10) + '0';
            if(s >= 10) {
                cnt = s / 10;
            }else {
                cnt = 0;
            }
        }
    }
    if(cnt > 0) {
            sum[t++] = cnt + '0';
    }
 
 
    while(t --) {
        if(sum[t] != '0') {
            break;
        }
    }
    t ++;
    if(t == 0) {
        cout << "0" << endl;
    }
    while(t -- ) {
        cout << sum[t];
    }
 
  //  cout << endl;
}
int main() {
    input();
    add();
    return 0;
}
