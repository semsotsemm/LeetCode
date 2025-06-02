#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int candy(vector<int>& ratings) {
		vector<short int> candies(ratings.size());
		int totalCandies = 0;
		for (int i = 0; i < ratings.size() - 1; i++)
		{
			if (candies[i] == 0)
			{
				candies[i]++;
				totalCandies += candies[i];
			}
			if (ratings[i + 1] > ratings[i])
			{
				candies[i + 1] = candies[i] + 1;
				totalCandies += candies[i + 1];
			}
			else if (ratings[i + 1] <= ratings[i])
			{
				candies[i + 1] = 1;
				totalCandies += candies[i + 1];
			}
		}
		for (int i = ratings.size() - 1; i > 0; i--)
		{
			if (ratings[i] < ratings[i - 1] && candies[i] >= candies[i - 1])
			{
				totalCandies += candies[i] + 1 - candies[i - 1];
				candies[i - 1] = candies[i] + 1;
			}
		}
		return (totalCandies == 0) ? 1 : totalCandies;
	}
};

void runTest(const vector<int>& ratings) {
	Solution sol;
	int result = sol.candy(const_cast<vector<int>&>(ratings));

	cout << "Ratings: ";
	for (int i = 0; i < ratings.size(); i++) {
		cout << ratings[i] << " ";
	}
	cout << "\nTotal candies required: " << result << "\n";
	cout << "-------------------------------\n";
}

int main() {
	vector<vector<int>> testCases = {{1, 2, 87, 87, 87, 2, 1},{1, 2, 2},{1, 0, 2}};
	for (int i = 0; i < testCases.size(); i++) {
		runTest(testCases[i]);
	}
	return 0;
}