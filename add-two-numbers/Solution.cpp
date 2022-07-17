struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    void insert(ListNode **root, int item)
    {
        ListNode *temp = new ListNode;
        ListNode *ptr;
        temp->val = item;
        temp->next = nullptr;

        if (*root == nullptr)
            *root = temp;
        else
        {
            ptr = *root;
            while (ptr->next != nullptr)
                ptr = ptr->next;
            ptr->next = temp;
        }
    }

    ListNode *arrayToList(std::vector<int> arr)
    {
        int n = arr.size();
        ListNode *root = nullptr;
        for (int i = 0; i < n; i++)
            insert(&root, arr[i]);
        return root;
    }

    std::vector<int> convertArr(ListNode *head)
    {
        // Create an array of the
        // required length
        std::vector<int> arr;

        int index = 0;
        ListNode *curr = head;

        // Traverse the Linked List and add the
        // elements to the array one by one
        while (curr != nullptr)
        {
            arr.push_back(curr->val);
            curr = curr->next;
        }

        return arr;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (!l1->next && l1->val == 0)
            return l2;
        if (!l2->next && l2->val == 0)
            return l1;
        ListNode *lres = new ListNode();
        ListNode *current = lres;
        int sum = 0, carry = 0;

        while (l1->next && l2->next)
        {
            sum = l1->val + l2->val + carry;
            if (sum > 9)
            {
                carry = 1;
                sum %= 10;
            }
            else
                carry = 0;

            current->val = sum;
            current->next = new ListNode();
            l1 = l1->next;
            l2 = l2->next;
            current = current->next;
        }
        sum = l1->val + l2->val + carry;
        if (sum > 9)
        {
            sum /= 10;
            current->next = new ListNode(1);
        }
        current->val = sum;

        return lres;
    }
};