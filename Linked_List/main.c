#include <stdio.h>
#include <stdlib.h>

struct Node {
    int elem ;
    struct Node * next ;
} ;

struct List {
    struct Node * head ;
} ;

void insert(int data, struct List* list) ;

void show_list(struct List* list);

int
main() {
    struct List *list = (struct List*) malloc(sizeof(struct List)) ;
	list->head = NULL;
	

	insert(3, list);

	show_list(list);

	insert(5, list) ;

	show_list(list);

	return 0;
}

void
insert(int data, struct List* list) {
	
	struct Node * freshMan =  (struct Node*) malloc(sizeof(struct Node)) ;	// new node created
	freshMan->elem = data ;
	freshMan->next =  NULL ;

	if(list->head == NULL)
		list->head = freshMan ;
	else{
		struct Node * curr = list->head ;	// Node pointer
		while (curr->next != NULL) {
			curr = curr->next ;
		}

		curr -> next = freshMan;
	}
}

void show_list(struct List* list){
	for(struct Node* cur=list->head; cur!=NULL; cur = cur->next) {
		printf("%d ", cur->elem);
	}
	printf("\n");

}