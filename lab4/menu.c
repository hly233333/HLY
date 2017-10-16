#include<stdio.h>
#include<stdlib.h>
#include"linktable.h"

int quit();
int help();

#define CMD_MAX_LEN 128
#define DESC_LEN 1024
#define CMD_NUM 10

typedef struct DataNode
{
    tLinkTableNode * pNext;
    char*   cmd;
    char*   desc;
    int   (*handler)();
} tDataNode;

tDataNode* FindCmd(tLinkTable * head, char * cmd)
{
    tDataNode * pNode = (tDataNode*)GetLinkTableHead(head);
    while(pNode != NULL)
    {
        if(!strcmp(pNode->cmd, cmd))
        {
            return pNode;
        }
        pNode = (tDataNode*)GetNextLinkTableNode(head,(tLink
    }
    return NULL;
}

int ShowAllCmd(tLinkTable * head)
{
    tDataNode * pNode = (tDataNode*)GetLinkTableHead(head);
    while(pNode != NULL)
    {
        printf("%s - %s\n",pNode->cmd,pNode->desc);
        pNode = (tDataNode*)GetNextLinkTableNode(head,(tLink));
    }
    return 0;
}

int InitMenuData(tLinkTable ** ppLinkTable)
{
    *ppLinkTable = CreateLinkTable();
    tDataNode* pNode = (tDataNode*)malloc(sizeof(tDataNode));
    pNode->cmd = "help";
    pNode->desc = "Menu List:";
    pNode->handler = help;
    AddLinkTableNode(*ppLink
static tDataNode head[] =
{
    {"help","this is help cmd",help,&head[1]},
    {"version","menu program v1.0",NULL,NULL}
};



tLinkTable * head = NULL;

main()
{
    InitMenuData(&head);

    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("input a cmd number");
        scanf("%s",cmd);
        tDataNode *p = FindCmd(head, cmd);
        if(p == NULL)
        {
            printf("this is a wrong cmd \n");
            continue;
        }
        printf("%s - %s\n",p->cmd,p->desc);
        if(p->handler != NULL)
        {
            p->handler();
        }
    }
}
int help()
{
    ShowAllCmd(head);
    return 0;

int quit()
{    
    exit(0);
}   
