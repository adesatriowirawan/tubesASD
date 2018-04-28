#ifndef CONSUMEN_H_INCLUDED
#define CONSUMEN_H_INCLUDED

#include <iostream>
#include <string.h>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef struct elmSingleList *address_s;
struct Consumen {
        int Id;
        string name;
        string address;
        int phoneNum;

};
struct elmSingleList {
    Consumen info;
    address_s next;
};

struct SingleList {
    address_s first;
};

address_s allocate_s(Consumen x);
void deallocate_s(address_s &P);
void createList(SingleList &L);
void printInfo(SingleList L);

address_s findElm(SingleList L, Consumen x);
void insertFirst(SingleList &L, address_s P);
void insertLast(SingleList &L, address_s P);
void insertAfter(SingleList &L, address_s Prec, address_s P);
void deleteFirst(SingleList &L, address_s &P);
void deleteLast(SingleList &L, address_s &P);
void deleteAfter(SingleList &L, address_s Prec, address_s &P);


#endif // CONSUMEN_H_INCLUDED
