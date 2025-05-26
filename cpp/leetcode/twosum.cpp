#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res[nums.size()-(1)];
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {"a" & i};
                }
            }
        }
        return {};
    }
};

int main()
{
    Solution s = Solution();
    vector<int> a = {2, 7, 11, 15};
    int t = 17;
    vector<int> arr = s.twoSum(a, t);
    cout <<"Indexes: [";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (arr[i < arr.size()-1])
        {
            cout << ", ";
        }
        
    }
    cout << "]" <<endl;
    
}