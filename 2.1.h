void deleteDuplicate(ListNode* head){
  unordered_set<int> dict;
  ListNode* prev = NULL;
  while(head){
    if (dict.count(head->val) != 0)
    {
      prev->next  = head->next;

    } else {
      prev = head;
      dict.insert(head->val);
    }
    head = head->next;
  }
}

//if O(1) space required O(n^2)
void deleteDuplicate(ListNode* head){
	ListNode* cur = head;
	while(head){
		ListNode *runner = cur;
		while(runner->next){
			if(runner->next->val == cur->val){
				runner->next = runner->next->next;
			} else {
				runner = runner->next;
			}
		}
		cur = cur->next;
	}
}
