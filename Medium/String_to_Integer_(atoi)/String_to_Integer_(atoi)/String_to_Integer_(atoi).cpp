#include <iostream>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int numberResult = 0, index = 0, signIndex = 0;
        int maxThreshold = pow(2, 31) / 10;
        while ((s[index] == ' ' || s[index] == '+' || s[index] == '-') && index < s.length()) {
            index++;
        }
        if (index >= 2 && (s[index - 2] == '-' || s[index - 2] == '+')) {
            return 0;
        }
        if (index >= 1) {
            signIndex = index - 1;
        }
        for (int i = index; s[i] >= '0' && s[i] <= '9'; i++) {
            if ((numberResult == maxThreshold && (s[i] - '0') % 10 > 7) ||
                (numberResult > maxThreshold && numberResult != maxThreshold)) {

                if (s[signIndex] == '-') {
                    return -pow(2, 31);
                }
                else {
                    return pow(2, 31) - 1;
                }
            }
            numberResult *= 10;
            numberResult += s[i] - '0';
        }
        s[signIndex] == '-' ? numberResult = -numberResult : numberResult = numberResult;
        return numberResult;
    }
};

int main()
{
    Solution sol;
    string str = "42";
    cout << "string " << str << " converted to number: " << sol.myAtoi(str) << "\n";
    str = "-042";
    cout << "string " << str << " converted to number: " << sol.myAtoi(str) << "\n";
    str = "1337c0d3";
    cout << "string " << str << " converted to number: " << sol.myAtoi(str) << "\n";
}