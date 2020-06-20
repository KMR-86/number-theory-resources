#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    cout<<4+3*n<<endl;
    cout<<"0 0"<<endl;
    cout<<"0 1"<<endl;
    cout<<"1 0"<<endl;
    cout<<"1 1"<<endl;
    pair<int,int>p1,p2,p3;
    p1=make_pair(0,1);
    p2=make_pair(1,0);
    p3=make_pair(1,1);
    for(int i=0;i<n;i++){
        p1.first++;
        p2.first++;
        p3.first++;
        p1.second++;
        p2.second++;
        p3.second++;

        cout<<p1.first<<" "<<p1.second<<endl;
        cout<<p2.first<<" "<<p2.second<<endl;
        cout<<p3.first<<" "<<p3.second<<endl;

    }

return 0;
}
