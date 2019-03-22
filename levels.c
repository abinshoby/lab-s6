 #include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

int call(int j,int n) {
  int k;
  if (n==0) {
    return 0;
  }
  k=fork();
  if (k==-1) {
    exit(0);
  }
  if (k==0) {
    printf("I am level %d | pid:%d | ppid:%d.\n",j-n,getpid(),getppid());
    call(j,n-1);
    exit(0);
  }
  else{
    wait(NULL);
  }
  return 0;
}


void main() {
 int n;
 printf("Enter level : ");
 scanf("%d",&n);
 printf("I am level 0 | pid:%d.\n",getpid());
 call(n,n-1);
}
