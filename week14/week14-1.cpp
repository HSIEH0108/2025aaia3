///week14-1.cpp 學習計畫 linked list 第2題
///LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>a; ///伸縮自如的陣列把植存起來
        while(head != nullptr){
            a.push_back(head ->val);
             head = head->next;
        }
        ListNode*ans = new ListNode(999); ///隨便放的
        ListNode*ans2 = ans; ///負責把ans 的尾巴收尾
        for(int i=a.size()-1;i>=0;i--){ ///倒過來迴圈
            ans2->next = new ListNode(a[i]);///下一筆
            ans2= ans2->next; ///套下一筆，繼續收尾
        }
        return ans->next;///還差一點點
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
