#ifndef GOODS_H_INCLUDED
#define GOODS_H_INCLUDED

#include <iostream>
#include <string.h>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev

typedef struct elmDoubleCircular *address_D;

struct Goods {
        int Id;
        string name;
        int expire;
        string price;

};
struct elmDoubleCircular {
    Goods info;
    address_D next;
    address_D prev;
};
struct DoubleCircular {
    address_D first;
    address_D last;
};

address_D allocate_D(Goods Q);
void deallocate_D(address_D &P);
void createList(DoubleCircular &L);
void printInfo(DoubleCircular L);

address_s findElm(DoubleCircular L, Goods Q);
void insertFirst(DoubleCircular  &L, address_D P);
void insertLast(DoubleCircular &L, address_D P);
void insertAfter(DoubleCircular &L, address_D Prec, address_D P);
void deleteFirst(DoubleCircular &L, address_D &P);
void deleteLast(DoubleCircular &L, address_D &P);
void deleteAfter(DoubleCircular &L, address_D Prec, address_D &P);

#endif // GOODS_H_INCLUDED
