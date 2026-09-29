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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode * head = NULL, *temp = NULL;

        if(list1 == NULL && list2 == NULL) return NULL;
        else if(list1 == NULL) return list2;
        else if(list2 == NULL) return list1;

        while(list1 != NULL && list2 != NULL) {

            if(list1->val > list2->val) {
                if(temp == NULL) {
                    temp = list2;
                    list2 = list2->next;
                    head = temp;
                }
                else {
                    temp->next = list2;
                    list2 = list2->next;
                    temp = temp->next;
                }

            }
            else if(list1->val <= list2->val) {
                if(temp == NULL) {
                    temp = list1;
                    list1 = list1->next;
                    head = temp;
                }
                else {
                    temp->next = list1;
                    list1 = list1->next;
                    temp = temp->next;
                }
            }

        }
        if(list1 == NULL) temp->next = list2;
        else if(list2 == NULL) temp->next = list1;

        return head;
    }
};