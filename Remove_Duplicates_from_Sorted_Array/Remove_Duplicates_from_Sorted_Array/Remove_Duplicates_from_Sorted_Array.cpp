#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastUniqueIndex = 0;
        int countUnique = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != nums[lastUniqueIndex])
            {
                nums[++lastUniqueIndex] = nums[i];
                countUnique++;
            }
        }
        return countUnique;
    }
};

void runTest(vector<int> nums) {
    Solution solution;
    int k = solution.removeDuplicates(nums);
    cout << "Input: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << "\nOutput: k = " << k << ", nums = ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";
}

int main() {
    vector <int> nums = {1,1,2};
    runTest(nums);
    nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
    runTest(nums);
    return 0;
}
