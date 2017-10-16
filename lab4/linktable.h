#ifndef LINK TABLE H
#define LINK TABLE H

#include <pthread.h>

#define SUCCESS 0
#define FAILURE (-1)

typedef struct LinkTableNode
{
    struct LinkTableNode * pNext;
}tLinkTableNode;

typedef struct LinkTable
{
    tLinkTableNode *pHead;
    tLinkTableNode *pTail;
    int         SumOfNode;
    pthread_mutex_t mutex;
}tLinkTable;

tLinkTable * CreateLinkTable();

int DeleteLinkTable(tLinkTable *pLinkTable);

int AddLinkTableNode(tLinkTable *pLinkTable,tLinkTableNode * pNode);

int DelLinkTableNode(tLinkTable *pLinkTable,tLinkTableNode * pNode);

tLinkTableNode * GetLinkTableHead(tLinkTable *pLinkTable);

tLinkTableNode * GetNextLinkTableNode(tLinkTable *pLinkTable,tLinkTableNode * pNode);

#endif

