#include<bits/stdc++.h>
using namespace std;
#define s 1000001
bool prime_map[s];

void seive(){
    prime_map[0]=1;
    prime_map[1]=1;
    for(long long int i=2;i<s;i++){
        if(prime_map[i]==0){
            for(long long int j=i*i;j<s;j=j+i){
                prime_map[j]=1;
            }
        }

    }



}
int get_prime_count(int n){
    int c=0;
    for(int i=1;i<=n;i++){

        if(prime_map[i]==0){
            c=c+1;
        }
    }
    return c;
}
int is_prime_prime(int n){
    if(prime_map[get_prime_count(n)]==0){
        return 1;
    }
    else return 0;

}
int main(){

seive();
//for(int i=1;i<1001;i++){cout<<i<<" "<<prime_count[i]<<endl;}

int l,r,cases;
cin>>cases;
while(cases--){
    cin>>l>>r;
    int c=0;
    for(int i=l;i<=r;i++){
        if(is_prime_prime(i)==1)c++;
    }
    cout<<c<<endl;
}



return 0;
}







