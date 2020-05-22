#include<bits/stdc++.h>
using namespace std;
int max_size=1000000001;
bool a[1000000001];
void seive(){
    a[1]=1;

    for(int i=2;i*i<max_size;i++){
        if(a[i]==0){
            for(int j=i*i;j<max_size;j=j+i){
                a[j]=1;
            }
        }

    }


}


int main(){
    seive();
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++){
        int b,c;
        cin>>b>>c;
        for(int j=b;j<=c;j++){
            if(a[j]==0){
                cout<<j<<endl;
            }
        }
        printf("\n");
    }



return 0;
}
