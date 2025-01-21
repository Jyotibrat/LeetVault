#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    // constructors
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

int main() {
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);

    node1->next = node2;
    node2->next = node3;

    cout << "Node 1 value: " << node1->val << endl;
    cout << "Node 2 value: " << node1->next->val << endl;
    cout << "Node 3 value: " << node1->next->next->val << endl;

    delete node1;
    delete node2;
    delete node3;

    return 0;
}