#include <iostream>
#include <string.h>
using namespace std;
//ʵ���ļӷ�
//
char str1[202],str2[202];
int maxL;
bool floatCarry=false;
bool Calint= false;
struct bigInteger{
    int digit[200];
    int size;
    void init(){
        for(int i=0;i<200;i++)  digit[i]=0;
        size=0;
    }
    void set(char str[],int L){  //λ���ĳ���
        init();
        for(size=0;size<L;size++){
            digit[size]=str[size]-'0';
        }
    }
 
    void output(){
        //ȥ��С������ĩβ��0
        int t=0;  //1200    0021
        if(!Calint){  //С������
            if(size>1){
                int tsize=size;
                while( digit[t]==0 && tsize>1){
                    tsize--;
                    t++;
                }
            }
        }
        for(int i=size-1;i>=t;i--){
            printf("%d",digit[i]);
        }
    }
 
    bigInteger operator + (const bigInteger &t) const {
        bigInteger ret;
        ret.init();
        if(floatCarry==true){
            ret.digit[0]++;  //�������Ľ�λ
        }
        int carry=0;
        for(int i=0;i<size || i<t.size;i++){
            int tmp=ret.digit[i]+digit[i]+t.digit[i]+carry;  //���������п�����С���Ľ�λ ����
            ret.digit[ret.size++]=tmp%10;   //
            carry=tmp/10;
        }
        if(carry!=0 && !Calint)
            floatCarry= true;
 
        if(carry!=0 && Calint)
            ret.digit[ret.size++]+=carry;
 
        return ret;
    }
 
}f1,f2,af,int1,int2,aint;  //С�����ֺ��������ֱַ����
 
int main(){
    cin>>str1>>str2;
    int len1=strlen(str1);
    int len2=strlen(str2);
    int pos1;
    if(strchr(str1,'.')==NULL) pos1=-1;
    else pos1 = strchr(str1,'.')-str1;
 
    int pos2;
    if(strchr(str2,'.')==NULL) pos2=-1;
    else pos2 = strchr(str2,'.')-str2;
 
    char t1[1001],t2[1001];
    //С������1
    //
    if(pos1!=-1 && pos2!=-1){
        int flen1=len1-pos1-1;
        int flen2=len2-pos2-1;
        int maxL=flen1>flen2?flen1:flen2;   //С���������λ��
 
        floatCarry=false;
        Calint= false;
        //��λ��ʼ��0
        int j=0;
        if(flen1<maxL){
            for(;j<maxL-flen1;j++){
                t1[j]='0';
            }
        }
        for(int i=len1-1;i>=pos1+1;i--){
            t1[j++]=str1[i];   //����  ��λ�ŵľ��ǵ�λ  .432 -> 234
        }
 
        f1.set(t1,maxL);
 
        j=0;
        if(flen2<maxL){
            for(;j<maxL-flen2;j++){
                t2[j]='0';
            }
        }
        for(int i=len2-1;i>=pos2+1;i--){
            t2[j++]=str2[i];   //����  ��λ�ŵľ��ǵ�λ  .432 -> 234
            //���λ�õ�str2д����str1
        }
        f2.set(t2,maxL);  //һ��ʼ���
        af=f1+f2;
    }
 
 
    memset(t1,0, sizeof(t1));
    memset(t2,0, sizeof(t2));
    //��������
    Calint= true;
    int tlen;
    if(pos1==-1)  tlen=len1-1;
    else tlen=pos1-1;
    for(int i=tlen,j=0;i>=0;i--){
        t1[j++]=str1[i];   //����  ��λ�ŵľ��ǵ�λ  432. -> 234
    }
    int1.set(t1,tlen+1);
 
    if(pos1==-1)  tlen=len2-1;
    else tlen=pos2-1;
    for(int i=tlen,j=0;i>=0;i--){
        t2[j++]=str2[i];   //����  ��λ�ŵľ��ǵ�λ  432. -> 234
    }
    int2.set(t2,tlen+1);
    aint=int1+int2;
 
    aint.output();
    if(pos1!=-1 && pos2!=-1){
        cout<<'.';
        Calint= false;
        af.output();
    }
    cout<<endl;
 
 
    return 0;
}
