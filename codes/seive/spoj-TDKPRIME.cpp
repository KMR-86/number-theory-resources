#include<bits/stdc++.h>
using namespace std;

int max_size=90000001;
bool l[90000001];
vector<int>k_prime;

void seive(){
    l[0]=true;
    l[1]=true;
    for(int i=2;i*i<max_size;i++){
        if(l[i]==false){
            for(int j=i*i;j<max_size;j=j+i){
                l[j]=true;
            }
        }
    }

}
void get_k_prime_list(){
    for(int i=1;i<max_size;i++){
        if(l[i]==false){
            k_prime.push_back(i);
        }
    }

}

int main(){
seive();
get_k_prime_list();
int cases;
cin>>cases;
for(int i=0;i<cases;i++){
    int k;
    cin>>k;
    cout<<k_prime[k-1]<<endl;
}

}
