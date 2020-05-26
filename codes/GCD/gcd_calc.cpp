#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b){
    if(a%b==0) return b;
    return gcd(b,a%b);

}

long long int gcd_loop(long long int a, long long int b){
    while(a%b!=0){
        long long int s=a%b;
        a=b;
        b=s;
    }
    return b;
}

long long int gcd_of_a_list(vector<int> v){
    if(v.size()==1){return v[0];}
    if(v.size()<1) return -1;
    long long int s=gcd(v[0],v[1]);
    for(int i=2;i<v.size();i++){
        s=gcd(s,v[i]);
    }
    return s;
}
int main(){
//cout<<gcd(40,30);
//cout<<gcd_loop(40,300);
int arr[] = {10,20,40,36,50};
vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]) );
cout<<gcd_of_a_list(nums);
return 0;
}
