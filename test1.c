#include "types.h"
#include "stat.h"
#include "user.h"

// sample test code for part 1 in lab 2

int test(int n)
{
   test(n+1);
   return n;
}
int main(int argc, char *argv[])
{
   int pid=0;
   pid=fork();
   if(pid==0){
   //int x=1;
  // printf(1, "address %x\n", &x);
   test(1);
   exit();
   }
   wait();
   exit();
}
