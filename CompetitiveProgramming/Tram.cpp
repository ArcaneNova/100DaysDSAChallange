#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    int cnt = 0, max = 0;
    while(n--){
        int in, out;
        cin>>out>>in;
        cnt+= in-out;
        if(cnt > max) max = cnt;
    }
    cout<<max<<endl;

    return 0;
}


// Vanya and Fence
int main(){
    int no_of_friends, ht_of_fence, road_width=0, ind_ht;
    cin>>no_of_friends>>ht_of_fence;
    for(int i=0;i<no_of_friends;i++){
        cin>>ind_ht;
        if(ind_ht > ht_of_fence) road_width+=2;
        else road_width++;
    }
    cout<<road_width<<endl;
}



// Queue at the school

int main(){
    int n,t; string s;
    cin>>n>>t>>s;
    while(t--){
        for(int i=0;i<n-1;i++){
            if (s[i] == 'B' && s[i+1] == 'G'){
                s[i] == 'G';
                s[i+1] == 'B';
                i++;
            }
        }
        cout<<s;
    }
}


// Beautiful year -> codeforce
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    n = n + 1;
    while(true){
        int once = n % 10;
        int tence = n/10 % 10;
        int hundred = n/100%10;
        int thousand = n/1000%10;
        
        if(once != tence && once != hundred && once != thousand && tence != hundred && tence != thousand && hundred != thousand){
            cout<<n;
            return 0;
        }
        else {
            n++;
        }
    }
}


// In search of an easy problem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int rating = 0; 
    int openion;
    for(int i=0;i<n;i++){
        cin>>openion;
        rating |=openion;
    }
    if(rating) cout<<"HARD";
    else cout<<"EASY";
}