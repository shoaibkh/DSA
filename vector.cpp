#include<iostream>
#include<vector>

using namespace std;

int singleNumber(vector<int> nums){
    int ans = 0;
    for(int i : nums){
        ans ^=i;
    }
    return ans;
}

vector<int> reverseArr(vector<int> nums){
    int start = 0, end = nums.size()-1; 
    // cout<<nums.at(end)<<endl;
    while(end>start){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    return nums;
}

int maximumSubArrSum(vector<int> nums){
    int maxSum = INT_MIN;
    for(int st=0; st<nums.size(); st++){
        int currSum = 0;
        for(int end = st; end<nums.size(); end++){
            currSum += nums[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int maxSumByKadaneAlgo(vector<int> nums){
    int maxSum = INT_MIN, currSum = 0;
    for(int i=0; i<nums.size(); i++){
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    return maxSum;
}

vector<int> pairSum(vector<int> nums){
    int target = 3;
    int start = 0;
    int end = nums.size()-1;
    vector<int> pairIndex;
    while(end>start){
        if(nums[start]+nums[end]>target){
            end--;
        }else if(nums[start]+nums[end]<target){
            start++;
        }else{
            pairIndex.push_back(start);
            pairIndex.push_back(end);
            return pairIndex;
        }
    }
    return pairIndex;
}

int majorityElementBF(vector<int> nums){
    for(int i = 0; i<nums.size(); i++){
        int freq = 0;
        for(int j = 0; j<nums.size(); j++){
            if(nums[i] == nums[j]){
                freq++;
            }
        }
        if(freq>nums.size()/2){
            return nums[i];
        }
    }
    return -1;
}

int majorityElementOptimize(vector<int> nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int freq = 1, ans=nums[0];
    for(int i = 1; i<n; i++){
        if(ans == nums[i]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return -1;
}

int majorityElementMoores(vector<int> nums){
    int n = nums.size();
    int freq = 0, ans=0;
    for(int i = 0; i<n; i++){
        if(freq == 0){
            ans=nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
        if(freq>n/2){
            return ans;
        }
    }
    return -1;
}

int main(){
    vector<int> vec = {2,2,2,1,5};
    int ans = majorityElementMoores(vec);
    cout<<ans<<endl;
    // for(int el: ans){
    //     cout<<pairSum(vec)<<endl;
    // }
    // vector<int> reverseVec = reverseArr(vec);
    // for(int val: vec){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // for(int val: reverseVec){
    //     cout<<val<<" ";
    // }
    // cout<<singleNumber(vec)<<endl;
    return 0;
}