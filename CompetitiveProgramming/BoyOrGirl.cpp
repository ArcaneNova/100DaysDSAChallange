// Codeforces
// 236A Boy or Girl

#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    set<char> s;
    while(cin>>c){
        s.insert(c);
    }
    cout<<(s.size()%2==0 ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}


// 266 A
int main(){
    int n, min_count=0;
    cin>>n;
    string s; cin>>s;
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            min_count++;
        }
    }
    cout<<min_count<<endl;
    return 0;
}


// Bear and Big brother
int main(){
    int a, b, years=0;
    cin>>a>>b;
    while(a<=b){
        a*=3;b*=2;
        years++;
    }
    cout<<years<<endl;
}

// Soldier and bananas

#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin>>k>>n>>w;
    cout<<max(0, (k*w*(w+1)/2 - n));
}


db pw: yqGMVX8rJMEfervl
mohammadshafaque26
mongodb+srv://mohammadshafaque26:yqGMVX8rJMEfervl@simpl.ethvf.mongodb.net/?retryWrites=true&w=majority&appName=simpl

// 340 A
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int cnt = 0;
    cnt=n/5;
    if(cnt%5==0)
    cout<<cnt<<endl;
    else
    cout<<cnt+1<<endl;
}


I have to build same website that's image is provided. Homepage and its dialogbox for adding/editing different section details is also provided. build same design and everything. use reactjs for frontend with tailwindcss. expressjs for backend with mongodb. give basic auth and same design.