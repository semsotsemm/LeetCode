#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int powerOfTen, sum = 0;
        ListNode* resultList = nullptr, * ptr = nullptr, * newNode = nullptr;
        if ((l1->next == nullptr && l2->next == nullptr) && (l2->val == 0 || l1->val == 0))
        {
            if (l2->val != 0 && l1->next == nullptr)
            {
                return l2;
            }
            else if (l1->val != 0 && l2->next == nullptr)
            {
                return l1;
            }
            return  new ListNode();
        }
        for (; (l1 != nullptr || l2 != nullptr) || sum != 0; sum /= 10) {
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            newNode = new ListNode(sum % 10);
            if (resultList == nullptr) {
                resultList = newNode;
                ptr = resultList;
            }
            else {
                ptr->next = newNode;
                ptr = ptr->next;
            }
        }
        return resultList;
    }
};

int main()
{
    ListNode* first = new ListNode(9);
    ListNode* first1 = new ListNode(4, first);
    ListNode* first2 = new ListNode(2, first1);
    ListNode* second = new ListNode(4);
    ListNode* second1 = new ListNode(6, second);
    ListNode* second2 = new ListNode(5, second1);
    ListNode* sec = new ListNode();
    ListNode* fir = new ListNode(1);
    Solution sol;
    sol.addTwoNumbers(fir, sec);
}