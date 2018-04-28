#include "Goods.h"

address_D allocate_D(Goods Q) {
    address_D P;
    P = new elmDoubleCircular;
    info(P) = Q;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void deallocate_D(address_D &P) {
    delete P;
    P = NULL;
}

void createList(DoubleCircular &L) {
    first(L) = NULL;
    last(L)  = NULL;
}

void printInfo(DoubleCircular L) {
    address_D P = first(L);
    while(P!=NULL) {
        cout<<info(P).Id <<", ";
        cout<<info(P).name <<", ";
        cout<<info(P).expire <<", ";
        cout<<info(P).price <<", ";
        P = next(P);
    }
    cout<<endl;
}

address_D findElm(DoubleCircular &L, int Q) {
    address_D P;
    P = first(L);
    while(P!=NULL && info(P).Id != Q) {
        P = next(P);
    }
    return P;
}
void insertFirst(DoubleCircular &L, address_D P) {
    if(first(L)!=NULL && last(L)!=NULL) {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
        prev(P)  = last(L);
        next(last(L)) = first(L);
    } else {
        first(L) = P;
        last(L) = P;
        prev(P) = last(L);
        next(last(L)) = first(L);
    }
}

void insertAfter(DoubleCircular &L, address_D Prec, address_D P) {
    if(Prec!=NULL) {
        if(next(Prec)==NULL) {
            insertLast(L, P);
        } else {
            next(P) = next(Prec);
            prev(P) = Prec;
            prev(next(Prec)) = P;
            next(Prec) = P;
        }
    }
}




