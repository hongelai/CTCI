LinkedListNode* partition(LinkedListNode* head, int x){
	LinkedListNode* before = NULL, *after  = NULL;
	//insert from beginning
	while(head){
		LinkedListNode* cur = head;
		head = head->next;

		if (x >= cur->val)
		{
			cur->next = before;
			before = cur;
		} else {
			cur->next = after;
			after = cur;
		}
	}
	if (before == NULL) return after;

	//find end of before list and then merge
	LinkedListNode* head = before;
	while(before->next){
		before = before->next;
	}
	before->next = after;
	return before;
}