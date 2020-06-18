#include<bits/stdc++.h>
#define S 100000000
using namespace std;


int main(){
int cases;
cin>>cases;
while(cases--){
    int a,b,n;
    cin>>a>>b>>n;
    int s,l;

    if(a>=b){
        l=a;
        s=b;
    }
    else{
        s=a;
        l=b;
    }
    int c=0;
    while(l<=n){
        int t=l;
        l=s+l;
        s=t;
        c++;
    }
    cout<<c<<endl;
}

return 0;
}
