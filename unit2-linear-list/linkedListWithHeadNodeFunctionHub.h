#ifndef Linked_LIST_WITH_HEAD_NODE_FUNCTION_HUB_H
#define Linked_LIST_WITH_HEAD_NODE_FUNCTION_HUB_H
using namespace std;

typedef int ElemType;
typedef struct LNode {
    ElemType data; // data
    struct LNode *next; // pointer
} LNode, *LinkList;


// Function1: Initialize a List
void InitList(LinkList &L) {
    L = (LinkList)malloc(sizeof(LNode));
    L->data = NULL;
    L->next = NULL;
}

//void InitList(LinkList *L) { // in pointer
//    (*L) = (LNode *)malloc(sizeof(LNode));
//    (*L)->data = NULL;
//    (*L)->next = NULL;
//}

// Function2: Destroy the List
void DestroyList(LinkList &L) {
    LNode *p;
    while (L != NULL) {
        p = L->next;
        delete L;
        L = p;
    }
}

// Function3: Clear the existing List
void ClearList(LinkList &L) {
    LNode *p;
    while (L->next != NULL) {
        p = L->next;
        L->next = p->next;
        delete p;
    }
}

// Function4: Return TRUE if the List is empty
bool ListEmpty(LinkList L) {
    if (L->next == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// Function5: Return the number of elements
int ListLength(LinkList L) {
    LNode *p;
    p = L->next;

    int cou = 0;
    while (p != NULL) {
        cou++;
        p = p->next;
    }
    return cou;
}





























#endif