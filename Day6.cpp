#include<bits/stdc++.h>
using namespace std;

vector<vector <int>> fourSum(vector<int> &nums, int target) {
    int n = nums.size();
    set<vector<int>> st;

    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=K+1;l<n;l++){
                    long long sum = nums[i] + nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum == target){
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}


// Optimized solution
// we can trim down the last loop

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target){
    int n = nums.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<long long> hashset;
            for(int k=j+1;k<n;k++){
                long long sum = nums[i]+nums[j];
                sum+=nums[k];
                long long fourth = target - sum;
                if(hashset.find(fourth) != hashset.end()){
                    vector<int> temp = {nums[i], nums[j], nums[k], fourth}
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// Now, its time to optimize it and make it optimal.
// Optimal Approach

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target){
    int n = nums.size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i > 0 && nums[i] == nums[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j != i+1 && nums[j] == nums[j-1]) continue;
            int k = j+1;
            int l = n-1;
            while(k < l){
                long long sum = nums[i];
                sum+=nums[j];
                sum+=nums[k];
                sum+=nums[l];
                if(sum == target) {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;l--;
                    while(k < l && nums[k] == nums[k-1]) k++;
                    while(k < l && nums[l] == nums[l+1]) l--;
                }
                else if(sum < target){
                    k++;
                }
                else {
                    l--;
                }
            }
        }
    }
    return ans;
}



// Number of subarrays with xor k
// Optimal solution

#include<bits/stdc++.h>
using namespace std;

int subarrayWithSumK(vector <int> a, int k){
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++;
    int cnt = 0;
    for(int i=0;i<a.size();i++){
        xr = xr ^ a[i];
        int x = xr ^ k;
        cnt += map[x];
    }
    return cnt;
}


// Merge all overlapping array
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        int start = arr[i][0];
        int end = arr[i][1];
        if(!ans.empty() && ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[j][0] <= end ){
                end = max(end, arr[j][1]);
            }
            else {
                break;
            }
        }
        ans.push_back({start, end});
    }
    return ans;
}


// Optimal approach
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> & arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for(int i=0;i<arr.size();i++)
    {
        if(ans.empty() || arr[i][0] > ans.back()[1]){
            ans.push_back(arr[i]);
        }
        else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}



// Merge sorted arrays without using extra space
// At first, using insert of insertion sort

void mergeArrays(vector<int> &a, vector<int> &b){
    // Traverse b[] starting from the last element
    for(int i=b.size()-1;i>=0;i--){
        // check if b[i] is smaller than largest el of a[]
        if (a.back() > b[i]) {

            // if yes, then place b[i] in correct position in a[]
            // and move last element of a[] to b[]
            int last = a.back();
            int j = a.size() - 2;
            while(j >= 0 && a[j] > b[i]){
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = b[i];
            b[i] = last;
        }
    }
}



// lcuky four 

#include<bits/stdc++.h>
using namespace std;

int main(){
    
}