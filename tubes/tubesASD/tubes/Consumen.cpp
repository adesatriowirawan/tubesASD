#include "Consumen.h"

address_s allocate_s(Consumen x) {
    address_s P;
    P = new elmSingleList;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void deallocate_s(address_s &P) {
    delete P;
    P = NULL;
}

void createList(SingleList &L) {
    first(L) = NULL;
}

void printInfo(SingleList L) {
    address_s P = first(L);
    while(P!=NULL) {
        cout<<info(P).Id <<", ";
        cout<<info(P).name <<", ";
        cout<<info(P).address <<", ";
        cout<<info(P).phoneNum <<", ";
        P = next(P);
    }
    cout<<endl;
}

address_s findElm(SingleList L, int x) {
    address_s P;
    P = first(L);
    while(P!=NULL && info(P).Id != x) {
        P = next(P);
    }
    return P;
}


void insertFirst(SingleList &L, address_s P) {
    next(P) = first(L);
    first(L) = P;
}

void insertLast(SingleList &L, address_s P) {
    if(first(L)==NULL) {
        insertFirst(L,P);
    } else {
        address_s Q = first(L);
        while(next(Q)!=NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertAfter(SingleList &L, address_s Prec, address_s P) {
    if(Prec!=NULL) {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteAfter(SingleList &L, address_s Prec, address_s &P) {
    if(Prec!=NULL) {
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }
}
void deleteFirst(SingleList &L, address_s &P) {
    if(first(L)!=NULL) {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void deleteLast(SingleList &L, address_s &P) {
    if(first(L)!=NULL) {
        address_s Q = first(L);
        if(next(Q)==NULL) {
            deleteFirst(L,P);
        } else {
            while(next(next(Q))!=NULL) {
                Q = next(Q);
            }
            P = next(Q);
            next(Q) = NULL;
            next(P) = NULL;
        }

    }
}


#LALALA
