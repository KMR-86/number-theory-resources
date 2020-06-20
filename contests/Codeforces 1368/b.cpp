#include<bits/stdc++.h>
#define S 100000000
using namespace std;
long long int c=0;
int len[10]={0};
bool is_larger(long long int n){
    long long int prod=1;
    for(int i=0;i<10;i++){
        prod=prod*len[i];
    }
    if(prod>=n)return true;
    return false;
}
int main(){
long long int n;
cin>>n;
string s="codeforces";
int l=s.size();
long long int m=1;
int d=0;
while(m<n){
    m=m*2;
    d++;

}

int j=0;
for(int i=0;i<l;i++){
    len[i]=1;
}
while(true){

    if(is_larger(n)){
        break;
    }
    len[j]=len[j]+1;
    j=(j+1)%l;

}
string ans="";
for(int i=0;i<l;i++){
    string t(len[i],s[i]);
    ans=ans+t;
}
cout<<ans;
return 0;
}
///421654016
///ccccccccooooooooddddddddeeeeeeefffffffooooooorrrrrrrccccccceeeeeeesssssss
///ccccccccooooooooddddddddeeeeeeefffffffooooooorrrrrrrccccccceeeeeeesssssss
