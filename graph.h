#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>

using namespace std;

#define info(P) P -> info
#define nextEdge(P) P -> nextEdge
#define next(P) P -> next
#define first(L) L.first

typedef char infotype;

typedef struct elementVertex *adrNode;
typedef struct elementEdge *adrEdge;

struct elementVertex{
    infotype info;
    adrEdge nextEdge;
    adrNode next;
};
struct elementEdge{
    infotype info;
    adrEdge next;
};

adrNode newNode_1301213142(char x);
void addNode_1301213142(adrNode &G, adrNode p);
adrNode findNode_1301213142(adrNode G, char x);
void addEdge_1301213142(adrNode &G, char x, char y);
bool isConnected_1301213142(adrNode G, char x, char y);
void printGraph_1301213142(adrNode G);

#endif // GRAPH_H_INCLUDED
