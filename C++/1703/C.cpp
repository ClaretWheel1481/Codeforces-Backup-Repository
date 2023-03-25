#pragma GCC optimize(2) //O2优化
#include<iostream>

using namespace std;

int Operate(int a,int h,char s[15])
{
    int k=a,i;
    for(i=0; i<h; i++){
        if(s[i]=='D'){
            if(k==9)k=0;
            else k++;
        }
        if(s[i]=='U'){
            if(k==0) k=9;
            else k--;
        }
    }
    return k;
}
int main()
{
    int n,t,h,i,j,a[110];
    char s[15];
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        for(i=0; i<n; i++){
            cin>>h>>s;
            a[i]=Operate(a[i],h,s);
        }
        for(i=0; i<n; i++)
            cout<<a[i]<< ' ';
        printf("\n");
    }
    return 0;
}
