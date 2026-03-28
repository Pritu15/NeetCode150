#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s1;
        for (int i=0;i<nums.size();i++){
            if(s1.find(nums[i])!=s1.end()){
                return true;
            }
            s1.insert(nums[i]);
        }
        return false;
        
    }
};

int main(){
    Solution s;
    vector<int> nums={1,2,2,4,5,6,7,8,9,10};
    cout<<s.hasDuplicate(nums)<<endl;
    return 0;
}
// terminal commands to run
// g++ -std=c++14 Contains_Duplicate.cpp -o Contains_Duplicate
// ./Contains_Duplicate