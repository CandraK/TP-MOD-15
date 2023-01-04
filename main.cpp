#include "graph.h"

using namespace std;

int main()
{
    adrNode G = NULL;
    adrNode P;
    P = newNode_1301213142('A');
    addNode_1301213142(G, P);
    P = newNode_1301213142('B');
    addNode_1301213142(G, P);
    P = newNode_1301213142('C');
    addNode_1301213142(G, P);
    P = newNode_1301213142('D');
    addNode_1301213142(G, P);
    addEdge_1301213142(G, 'A', 'B');
    addEdge_1301213142(G, 'A', 'D');
    addEdge_1301213142(G, 'A', 'C');
    addEdge_1301213142(G, 'B', 'D');
    addEdge_1301213142(G, 'B', 'A');
    addEdge_1301213142(G, 'C', 'A');
    addEdge_1301213142(G, 'D', 'A');
    addEdge_1301213142(G, 'D', 'B');
    printGraph_1301213142(G);
    return 0;
}
