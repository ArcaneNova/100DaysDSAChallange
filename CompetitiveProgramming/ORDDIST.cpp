#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        vector<long long> x(n), y(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        vector<pair<long long, long long>> v;
        for(int i=0;i<n;i++){
            v.push_back({abs(x[i]-y[0]), x[i]});
        }
        sort(all(v));
        for(int i=0;i<n;i++){
            if(y[i]!=v[i].second){
                cout<<-1<<endl;
                return;
            }
        }
        int ans;
        for(int i=0;i<n;i++){
            if(x[i]==y[0]){
                ans=i;
                break;
            }
        }
        cout<<ans+1<<endl;
    }
}