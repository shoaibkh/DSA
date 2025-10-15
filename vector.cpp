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
        swap(nums.at(start), nums.at(end));
        start++;
        end--;
    }
    return nums;
}
int main(){
    vector<int> vec = {4,1,2,2,1};
    vector<int> reverseVec = reverseArr(vec);
    for(int val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
    for(int val: reverseVec){
        cout<<val<<" ";
    }
    // cout<<singleNumber(vec)<<endl;
    return 0;
}