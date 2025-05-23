#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return { i, j };
                }
            }
        }
        return {}; // No solution
    }
    void printSolution(vector<int>& result)
    {
        if (result.size() == 2)
        {
            cout << "[" << result[0] << "," << result[1] << "]\n";
        }
        else
        {
            cout << "No solution\n";
        }
    }
};

int main() {
    Solution sol;
    vector<int> result;
    vector<int> test_Case_1 = { 2,7,11,15 };
    int target_1 = 9;
    vector<int> test_Case_2 = { 3,2,4 };
    int target_2 = 6;
    vector<int> test_Case_3 = { 3,3 };
    int target_3 = 6;
    cout << "Test 1: ";
    result = sol.twoSum(test_Case_1, target_1);
    sol.printSolution(result);
    cout << "Test 2: ";
    result = sol.twoSum(test_Case_2, target_2);
    sol.printSolution(result);
    cout << "Test 3: ";
    result = sol.twoSum(test_Case_3, target_3);
    sol.printSolution(result);
}