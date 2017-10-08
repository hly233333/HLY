#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"

int help();

#define CMD_MAX_LEN 128
#define DESC_LEN 1024
#define CMD_NUM 18

static tDataNode head[] =
{
    {"help","this is help cmd",help,&head[1]},
    {"version","menu program v1.0",NULL,NULL}
};

main()
{
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
}   
