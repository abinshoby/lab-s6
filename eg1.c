#include<stdio.h>
#include<unistd.h>
int main(void )
{
    printf("Hello World!\n");
    fork();
    printf("I am after forking\n");
    printf("\t I am process %d.\n",getpid());
   }
