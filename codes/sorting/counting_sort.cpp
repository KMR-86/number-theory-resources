#include<bits/stdc++.h>
#define S 1000000
using namespace std;

int a[16]={22,103,12,17,11,100,86,89,91,76,114,118,31,33,33,22};

void counting_sort(int n){

    int mn=400000000;
    int mx=-400000000;
    for(int i=0;i<n;i++){
        if(a[i]<mn)mn=a[i];
        if(a[i]>mx)mx=a[i];
    }

    if(mx-mn>1000){
        cout<<"range is too large for counting sort"<<endl;
    }
    else{
       vector<int>v(mx-mn+1,0);
       for(int i=0;i<n;i++){
         v[a[i]-mn]++;
       }
       for(int i=0;i<=mx-mn;i++){
        if(v[i]!=0){
            for(int j=0;j<v[i];j++){
                cout<<i+mn<<" ";
            }
        }
       }
    }

}
int main(){
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

int tc;
counting_sort(16);

return 0;
}



