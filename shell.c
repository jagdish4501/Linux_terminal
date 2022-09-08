#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include<string.h>

int main(){
    while(1){
        printf("$ ");
        char inp[1000];
        gets(inp);
        char *args[10];
        char *token=strtok(inp," ");
        int k=0;
        while(token!=NULL){
            args[k++]=token;
            token=strtok(NULL," ");
        }
        args[k]=NULL;
        int ret=fork();

        switch(ret){
            case -1:
                printf("System not able to perform task\n");
                break;
            case 0:
                execvp(args[0],args);
                printf("Failed to execute \n");
                exit(0);
            default:
                wait(NULL);
        }
    }
}