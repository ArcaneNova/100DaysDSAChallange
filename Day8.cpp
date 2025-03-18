#include<bits/stdc++.h>
using namespace std;

vector<int> findSubstring(string s, vector<string> &words){
    int n = words[0] = size();
    int m = words.size();
    int tl = m*n;

    unordered_map<string, int> mp1;
    vector<int> ans;
    for(auto word: words){
        mp1[word]++;
    }
    if(tl > s.size()){
        return ans;
    }
    for(int i=0;i<m;i++){
        unordered_map<string, int> mp2;
        int left = i;
        for(int j=i;j<s.size()-m;j+=m){
            string temp = s.substr(j, m);

            if(mp1.find(temp) != mp1.end()){
                mp2[temp]++;

                while(mp2[temp] > mp1[temp]){
                    mp2[s.substr(left,m)]--;
                    left+=m;
                }
                if(j-left+m == tl){
                    ans.push_back(left);
                    mp2[s.substr(left, m)]--;
                    left+=m;
                }
            }
            else{
                mp2.clear();
                left=j+m;
            }
        }
    }
}


// Find pivet index
// done in leetcode


// Increasing triplet
// tried using o(n^3) but its not efficient
// so lets try another approach

bool increasingTriplet(vector<int> &nums){
    int n = nums.size();
    int num1 = INT_MAX;
    int num2 = INT_MAX;

    for(int i=0;i<n;i++){
        int num3 = nums[i];

        // first ask num3 is it <= num1, update if yes
        if(num3 <= num1){
            num1 = num3;
        }
        else if(num3 <= num2){
            num2 = num3;
        }
        else { // it means num1 <= num2 and we found our third one
            return true;
        }
    }
}


// Largest parameter
int largestPerimeter(vector<int> &nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i=0;i<n;i++){
        if(nums[i] + nums[i+1] > nums[i+2]) {
            return nums[i]+nums[i+1]+nums[i+2];
        }
    }
    return 0;
}


// continuous subarray

bool checkSubarraySum(vector<int> &nums, int k){
    int n = nums.size();
    unordered_map<int, int> mp;
    mp[0]=-1;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        int remainder = sum%k;
        

        // check if it's present in map
        if(mp.find(remainder) != mp.end()){
            if (i-mp[remainder] >= 2){
                return true;
            } 
        }
        else {
            mp[remainder] = i;
        }
    }
    return false;
}