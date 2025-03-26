class Solution {
    public:
        ListNode* swapPairs(ListNode* head) {
            if ( head == nullptr || head->next == nullptr ) return head; // base cases
            ListNode* dum = new ListNode(-1);
            ListNode* temp = dum;
            ListNode* start = head, *end = head, *next = head;
            while ( next != nullptr ) { //simulate each step by step
                start = next;
                end = start->next;
                if ( end == nullptr ) break; // cannot find a pairm only single node is found
                next = end->next;
                temp->next = end;
                temp = end;
                temp->next = start;
                temp = start;
                temp->next = nullptr;
            }
        if ( next != nullptr ) { // one single node left alone, we attach it to end
            temp->next = next;
        }
        return dum->next;
        }
    };