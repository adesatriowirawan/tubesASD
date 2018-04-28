#ifndef RELATION_H_INCLUDED
#define RELATION_H_INCLUDED

#include <iostream>
#include <string.h>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef struct elmRelationList *address_R;
struct Relation {
        address_s Buyer;
        address_D Goods;

};
struct elmRelationList {
    Relation info;
    address_R next;
};

struct RelationList {
    address_R first;
};

address_R allocate_R(Relation x);
void deallocate_R(address_R &P);
void createList_R(RelationList &L);
void printInfo_R(RelationList L);

address_R findElm(RelationList L, Relation x);
void insertFirst_R(RelationList &L, address_R P);
void insertLast_R(RelationList &L, address_R P);
void insertAfter_R(RelationList &L, address_R Prec, address_R P);
void deleteFirst_R(RelationList &L, address_R &P);
void deleteLast_R(RelationList &L, address_R &P);
void deleteAfter_R(RelationList &L, address_R Prec, address_R &P);



#endif // RELATION_H_INCLUDED
