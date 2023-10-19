#include<stdio.h>
#include<stdlib.h>

typedef struct _NODE { 
	//노드라는 이름이 중복이되면 오류날수도있음 (컴파일러마다다름) _를 써야됨.
	int data;
	struct _NODE* next;
} NODE;

void print_list(NODE* head) {
	NODE* p = head->next;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	
}

void insert_node(NODE* head, int data) {
	NODE* p = head;
	while (p->next != NULL) {
		p = p->next;
	}

	NODE* new_node = (NODE*)malloc(sizeof(NODE));
	new_node->data = data;
	new_node->next = p->next;
	p->next = new_node;
}

int main() {
	NODE* head = (NODE*)malloc(sizeof(NODE));
	head -> next = NULL;
	// (*head). 직접접근 head -> 간접접근

	NODE* n1 = (NODE*)malloc(sizeof(NODE));;
	n1->data = 1;
	n1->next = head->next;
	head->next = n1;

	NODE* n2 = (NODE*)malloc(sizeof(NODE));;
	n2->data = 2;
	n2->next = n1->next;
	head->next = n2;

	NODE* n3 = (NODE*)malloc(sizeof(NODE));;
	n3->data = 3;
	n3->next = n1->next;
	n2->next = n3;

	insert_node(head, 4);
	insert_node(head, 5);

	print_list(head);

	return 0;
}