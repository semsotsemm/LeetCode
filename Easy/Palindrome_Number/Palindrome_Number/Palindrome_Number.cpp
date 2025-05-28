#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string numStr = to_string(x);
        for (int i = 0; i < numStr.length()/2; i++)
        {
            if (numStr[i] != numStr[numStr.length() - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    int number = 121;
    if (sol.isPalindrome(number))
    {
        cout << "The number " << number << " is a palindrome.\n";
    }
    else
    {
        cout << "The number " << number << " is not a palindrome.\n";
    }
    number = -121;
    if (sol.isPalindrome(number))
    {
        cout << "The number " << number << " is a palindrome.\n";
    }
    else
    {
        cout << "The number " << number << " is not a palindrome.\n";
    }
    number = 10;
    if (sol.isPalindrome(number))
    {
        cout << "The number " << number << " is a palindrome.\n";
    }
    else
    {
        cout << "The number " << number << " is not a palindrome.\n";
    }
}