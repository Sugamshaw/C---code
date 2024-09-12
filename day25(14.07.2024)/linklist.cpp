
#include <iostream>
#include <unordered_set>
#include <vector>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* modifiedList(std::vector<int>& nums, ListNode* head) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());

        // Dummy node to handle edge cases where head needs to be removed
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* current = dummy;

        while (current->next != nullptr) {
            if (numSet.count(current->next->val)) {
                ListNode* toDelete = current->next;
                current->next = current->next->next;
                delete toDelete;
            } else {
                current = current->next;
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Helper function to create a linked list from a vector
ListNode* createList(const std::vector<int>& values) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int value : values) {
        ListNode* newNode = new ListNode(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

int main() {
    Solution solution;

    std::vector<int> nums1 = {1, 2, 3};
    ListNode* head1 = createList({1, 2, 3, 4, 5});
    ListNode* result1 = solution.modifiedList(nums1, head1);
    printList(result1);  // Output: 4 5

    std::vector<int> nums2 = {1};
    ListNode* head2 = createList({1, 2, 1, 2, 1, 2});
    ListNode* result2 = solution.modifiedList(nums2, head2);
    printList(result2);  // Output: 2 2 2

    std::vector<int> nums3 = {5};
    ListNode* head3 = createList({1, 2, 3, 4});
    ListNode* result3 = solution.modifiedList(nums3, head3);
    printList(result3);  // Output: 1 2 3 4

    return 0;
}
