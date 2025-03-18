#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long x,y,k;
    cin>>x>>y>>k;
    long long curr = abs(x-y);

    if(abs(curr-k)&1) { // for checking the odd no
    cout<<-1<<endl;
    }
    else {
        cout<<abs(curr-k)/2<<endl;
    }
}

int main(){

}