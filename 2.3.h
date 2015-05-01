bool deleteNode(LinkedListNode* n){
	if(n == NULL || n->next == NULL) return false;
	LinkedListNode* next = n->next;
	n->val = next->val;
	n->next = next->next;
	return true;
}