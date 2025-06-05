#include <iostream>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
		int repeat = 0;
		for (int i = 0; i < haystack.length(); i++)
		{
			if (haystack[i] == needle[0])
			{
				for (int j = 0, k = i; j < needle.length() && k < haystack.length(); j++, k++)
				{
					if (haystack[k] == needle[j])
					{
						repeat++;
					}
				}
				if (repeat == needle.length())
				{
					return i;
				}
				else
				{
					repeat = 0;
				}
			}
		}
		return -1;
    }
};

int main()
{
	Solution sol;
	sol.strStr("sldsad", "sad");
}