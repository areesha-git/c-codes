#include<stdio.h>
 int main(){
   int  n,i;
   int factorical=1;
      printf("Enter the number :- ");
      scanf("%d",&n);
     if (n<0){
      printf("the number is negtive");
     }else{
      for ( i = 1; i <=n; i++)
      {
         factorical =factorical *i; 
      }
      printf("factorial of %d is \n", factorical);
   }
      
     return 0 ;
   
  }