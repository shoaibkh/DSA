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

int main(){
    vector<int> vec = {1,2,3,4,5};
    vector<int> ans = pairSum(vec);
    cout<<ans[0]<<","<<ans[1]<<endl;
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