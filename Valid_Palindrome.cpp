#include <iostream>
using namespace std;
class Solution
{
public:
    bool isAlphanumeric(char c)
    {
        return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
    }
    bool isPalindrome(string s)
    {
        int l = 0, r = s.length()-1;
        while (l <= r)
        {
            while (l<r &&!isAlphanumeric(s[l]))
                l++;
            while (l<r &&!isAlphanumeric(s[r]))
                r--;
            if (tolower(s[l]) != tolower(s[r]))
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

int main()
{
    string s = s = "A man, a plan, a canal: Panama";
    Solution sol;
    cout<<"Hello World!"<<endl;
    cout << sol.isPalindrome(s) << endl;
}