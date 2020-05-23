#include<bits/stdc++.h>
using namespace std;
bool prime_log[1000001];
vector<int>primes;
void seive(int n){
    prime_log[0]=1;
    prime_log[1]=1;
    for(int i=2;i*i<n;i++){
        if(prime_log[i]==0){
            for(int j=i*i;j<n;j=j+i){
                prime_log[j]=1;
            }
        }

    }
    for(int i=2;i<n;i++){
        if(prime_log[i]==0){
            primes.push_back(i);

        }
    }
}
void segmented_seive(long long int a,long long int b){
    long long int n;
    seive(1000000);
    if(a==1)a++;
    n=b-a+1;
    vector <bool> lim(n,0);
    for(int i=0;i<primes.size()&&primes[i]<b;i++){
        long long int x;
        x=a/primes[i];
        ///if(primes[i]==101)cout<<x<<" ";
        x=x*primes[i];

        if(x<a)x=x+primes[i];

        for(int j=x-a;j<n;j=j+primes[i]){
            if(j+a!=primes[i])lim[j]=1;
        }
    }
    for(int i=0;i<n;i++){
        //cout<<lim[i]<<endl;
        if(lim[i]==0){
            cout<<i+a<<endl;
        }
    }



}
int main(){

//segmented_seive(10000000000,10000001000);
segmented_seive(1000000000000,1000000001000);

return 0;
}
