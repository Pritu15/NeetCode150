#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                return {mp[target-nums[i]],i};
            }
            mp.insert({nums[i],i});
        }

        
    }
};
int main(){
    Solution s;
    vector<int> nums={2,7,11,15};
    int target=17;
    vector<int> res=s.twoSum(nums,target);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;

}

//g++ -std=c++14 Two_Sum.cpp -o Two_Sum
//./Two_Sum