#include "Relation.h"

address_R allocate_R(Relation x){
    address_R P;
    P = new elmrRelationList;
    info(P) = x;
    info(P).Buyer = x.Buyer;
    info(P).Goods = x.Goods;
    next(P) = NULL;
    return P;

}
void deallocate_R(address_R &P){
    delete P;
    P = NULL;
}
void createList_R(RelationList &L){
    first(L) = NULL;
}
void printInfo_R(SingleList L, address_s q){
    address_R P = first(L);
    while(P!=NULL) {
        if (info(P).Buyer.id= info(q).id)
            cout<<info(P).Goods.name <<", ";
            cout<<info(P).Goods.price <<", ";
        P = next(P);
    }
    cout<<endl;
}


void insertFirst_R(RelationList &L, address_R P){
    next(P) = first(L);
    first(L) = P;

}
void insertLast_R(RelationList &L, address_R P){
    if(first(L)==NULL) {
        insertFirst(L,P);
    } else {
        address_R Q = first(L);
        while(next(Q)!=NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }

}
void insertAfter_R(RelationList &L, address_R Prec, address_R P){
    if(Prec!=NULL) {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}
void deleteFirst_R(RelationList &L, address_R &P){
      if(first(L)!=NULL) {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}
void deleteLast_R(RelationList &L, address_R &P){
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
void deleteAfter_R(RelationList &L, address_R Prec, address_R &P){
    if(Prec!=NULL) {
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }

}
