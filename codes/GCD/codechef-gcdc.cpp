#include<bits/stdc++.h>
using namespace std;
int prefix[100005]={0};
int suffix[100005]={0};
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);

}

int gcd_of_a_list(int n,int l,int r){
    int p;
    if(l==0){p=0;}
    else{
        p=prefix[l-1];
    }
    int s;
    if(r==n-1){s=0;}
    else{
        s=suffix[n-2-r];
    }
    return gcd(p,s);

}
int main(){
int cases;
cin>>cases;
while(cases--){

    int n,q;
    cin>>n>>q;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        nums.push_back(t);
    }
    int s1=0;
    for(int i=0;i<n;i++){
        s1=gcd(s1,nums[i]);
        prefix[i]=s1;
    }
    int s2=0;
    for(int i=n-1;i>=0;i--){
        s2=gcd(s2,nums[i]);
        suffix[n-1-i]=s2;
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<gcd_of_a_list(n,l-1,r-1)<<endl;
    }

}

return 0;
}
