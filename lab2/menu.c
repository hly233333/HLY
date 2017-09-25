#include <stdio.h>
#include <stdlib.h>
int main()
{   
    char cmd[128];
    while(1)
    {
        scanf("%s", cmd);
        if(!strcmp(cmd, "hello"))
        {
	    printf("hi,my friend");
        }
        else if(!strcmp(cmd, "who"))
        {
            printf("I'm siri!");
        }
        else if(!strcmp(cmd, "age"))
        {
            printf("3 years old");
        }
        else if(!strcmp(cmd, "where"))
        {   
            printf("in the school");
        }
        else if(!strcmp(cmd, "you"))
        {
            printf("stupid");
        }
        else if(!strcmp(cmd, "really"))
        {
            printf("yes~");
        } 
        else if(!strcmp(cmd,"no"))
        {
            printf("I'm sorry");
        }
        else if(!strcmp(cmd,"bye"))
        {
            printf("bye");
            exit(0);
        
        }
    }
}

