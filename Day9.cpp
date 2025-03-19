// Count occurances of anagrams
// Sliding windows


// 1st approach : brute
#include<bits/stdc++.h>
using namespace std;

bool areAnagram(string s1, string s2){
    vector<int> cnt(26, 0);

    for(int i=0;i<s1.length();i++){
        cnt[s1[i] - 'a']++;
    }
    for(int i=0;i<s2.length();i++){
        cnt[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(cnt[i] != 0) return false;
    }
    return true;
}


int solve(string &pattern, string &text){
    int res = 0;

    for(int i=0;i<text.length()-pattern.length()-1;i++){
        // check if it is anagram
        if(areAnagram(text.substr(i, pattern.length()), pattern)) res++;
    }
    return res;
}


// Sliding window approach

bool isAnagram(vector<int> &cnt){
    for(int i=0;i<26;i++){
        if(cnt[i] != 0) return false;
    }
    return true;
}

int search(string &pattern, string &text){
    int n = text.length();
    int m = pattern.length();
    // if length of pattern if grater then text length
    // it is not possible
    if (m > n) return 0;

    // store the count of each char of pattern in array
    vector<int> cnt(26, 0);
    for(char ch: pattern){
        cnt[ch-'a']++;
    }
    for(int i=0;i<m-1;i++){
        char ch = text[i];
        cnt[ch-'a']--;
    }

    int ans = 0;

    // sliding window of size pattern.length
    for(int i=m-1;i<n;i++){
        // add the charater in array
        char ch = text[i];
        cnt[ch-'a']--;

        // check if anagram exists 
        if (isAnagram(cnt)) ans++;

        // remove the first charactre of the window
        char toDel = text[i-m+1];
        cnt[toDel-'a']++;
    }
    return ans;
}



// Fint negative integer in every window of size k
vector<long long> print
