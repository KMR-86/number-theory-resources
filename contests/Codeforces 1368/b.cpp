#include<bits/stdc++.h>
#define S 100000000
using namespace std;
long long int c=0;

int main(){
long long int n;
cin>>n;
string s="codeforces";
n=n-1;
cout<<"codeforces";
s="";
long long int a=1;
long long int ans=1;
while(n!=0){
    if(n%2==1){
        ans=ans*a;
        for(int i=0;i<ans;i++){
            cout<<"s";
        }
    }
    if(a==1){
        a=2;
    }
    else{
        a=a*a;
    }
    n=n/2;
}
cout<<s;



return 0;
}

