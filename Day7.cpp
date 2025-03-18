#include<bits/stdc++.h>
using namespace std;

// Missing number and repeating number 
// Brute force approach

vector<int> findMissingRepeatingNumbers(vector<int> a){
    int n = a.size();
    int missing= repeating=-1;

    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=i+1;j<n;j++){
            if(arr[j] == i){
                cnt++;
            }
            if(cnt==2) repeating = i;
            else if(cnt==0) repeating=i;
             if(repeating != -1 && missing != -1) {
            break;
            }
        }
    }
}


// Missing number and repeating number 
// Better approach
vector<int> findMissingRepeatingNumbers(vector<int> a){
    int n = a.size();
    int hash[n+1] = {0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }

    int repeating = -1, missing = -1;
    for(int i=0;i<=n;i++){
        if(hash[i] == 2) repeating = i;
        else if(hash[i] == 0) missing = i;
        if(repeating != -1 && missing != -1) {
            break;
        }
    }
    return {repeating, missing};
}


// Optimal method
// 1. Maths formula
// 2. XOR Method

vector<int> findMissingRepeatingNumbers(vector<int> a){
    long long n = a.size();
    // S - Sn
    // S2 - S2N
    long long SN = (n * (n+1)) / 2;
    long long S2N = (n* (n+1) * (2*n+1)) / 6;

    long long S=S2=0;
    for(int i=0;i<n;i++){
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    long val1 = S - SN;
    long val2 = S2 - N2N;

    val2 = val2/val1;

    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int) x, (int)y};
}


class Solution {
    public: 
    bool containsNearbyDuplicate(vector<int> &num, int k){
        unordered_set<int> s;

        // traverse the input array
        for(int i=0;i<nums.size();i++){
            // if already present in hash, then we found
            // a duplicate within k distance
            if(s.find(nums[i]) != s.end()){
                return true;
            }
            s.insert(arr[i]);

            //remove the k+1 distant item
            if(i >= k){
                s.erase(arr[i-k]);
            }
        }
        return false;
    }
}


// intersection of two arrays

// Let's do it with naive approach

vector<int> intersection(vector<int> &a, vector<int> &b){
    vector<int> res;

    // now, traverse through all elems of both arrays
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++){
            if(a[i] == b[j]){
                int k;
                for(k=0;i<res.size();k++){
                    if(res[k] == a[i]){
                        break;
                    }
                }
                if(k== res.size()){
                    res.push_back(a[i]);
                }
            }
        }
    }
    return res;
}

