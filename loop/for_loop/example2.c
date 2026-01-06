#include<stdio.h>
int main(void){
  
  int i, count;
  printf("Enter the number of times to print 'Hello world': ");
  scanf("%d", &count);
   for(i=1; i<=count; i++){
     printf("Hello World \n");
    }
  
   return 0;
}
