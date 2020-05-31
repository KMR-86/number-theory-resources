#include<bits/stdc++.h>
#define SIZE 100001
using namespace std;
vector<int>eular(SIZE,0);
void set_eular(){
    for(int i=0;i<SIZE;i++){
        eular[i]=i;
    }
    for(int i=2;i<SIZE;i++){
        if(eular[i]==i){
            for(int j=i;j<SIZE;j=j+i){
                eular[j]=eular[j]-eular[j]/i;
            }
        }

    }

}
int main(){
set_eular();
int in;
cin>>in;
cout<<eular[in]<<endl;
main();

return 0;
}
