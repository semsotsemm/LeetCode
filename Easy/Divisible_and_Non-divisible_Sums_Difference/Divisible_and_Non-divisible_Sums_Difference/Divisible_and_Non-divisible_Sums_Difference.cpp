#include <iostream>

using namespace std;

class Solution {
public:
    int differenceOfSums(int n, int m) {
		int num1 = 0, num2 = 0;
		for (int i = 1; i <= max(n,m); i++)
		{
			if (i % m != 0 && i <= n)
			{
				num1 += i;
			}
			if (i % m == 0 && i <= n)
			{
				num2 += i;
			}
		}
		return num1 - num2;
    }
};

int main()
{
	Solution sol;
	int m, n;
	n = 10;
	m = 3;
	cout << "for n = " << n << " and m = " << m << " num1 - num2 = " << sol.differenceOfSums(n, m) << "\n";
	n = 5;
	m = 6;
	cout << "for n = " << n << " and m = " << m << " num1 - num2 = " << sol.differenceOfSums(n, m) << "\n";
	n = 5;
	m = 1;
	cout << "for n = " << n << " and m = " << m << " num1 - num2 = " << sol.differenceOfSums(n, m) << "\n";
	return 0;
}