#include "graph.h"

adrNode newNode_1301213142(char x){
    adrNode P;
    P = new elementVertex;
    info(P) = x;
    nextEdge(P) = NULL;
    next(P) = NULL;
    return P;
}

void addNode_1301213142(adrNode &G, adrNode p){
    adrNode x = G;
    if (x == NULL){
        G = p;
    }
    else{
        while(next(x) != NULL){
            x = next(x);
        }
        next(x) = p;
    }
}

adrNode findNode_1301213142(adrNode G, char x){
    adrNode p = G;
    while(p != NULL){
        if(info(p) == x){
           return p;
        }
        p = next(p);
    }
    return NULL;

}

void addEdge_1301213142(adrNode &G, char x, char y){
    adrEdge q;
    adrNode p = findNode_1301213142(G,x);
    if (p == NULL){
        p = newNode_1301213142(x);
        addNode_1301213142(G,p);
        q = new elementEdge;
        info(q) = y;
        next(q) = NULL;
        nextEdge(p) = q;
    }
    else{
        q = new elementEdge;
        info(q) = y;
        next(q) = nextEdge(p);
        nextEdge(p) = q;
    }
}

bool isConnected_1301213142(adrNode G, char x, char y){
    adrNode p = findNode_1301213142(G,x);
    adrEdge q = nextEdge(p);
    while(q != NULL){
        if (info(q) == y){
            return true;
        }
        q = next(q);
    }
    return false;
}

void printGraph_1301213142(adrNode G){
    adrNode Q = G;
    if (G = NULL){
        cout << "graph tidak tersedia";
    }
    else{
        while(Q != NULL){
            cout << "node" << info(Q) << " : ";
            adrEdge p = nextEdge(Q);
            while (p != NULL){
                cout << " - " << info(p);
                p = next(p);
            }
            Q = next(Q);
            cout << endl;
        }
    }
}
