#include<stdio.h>

int main(){
    /*for (int i = 0; i <3 ; i++)
    {
       for (int j = 0; j<=i; j++)
       {
       printf("%d ", j);
       }
       printf("\n");
    }
    */

    /*for (  char ch = 'A';ch<='C' ; ch++)
    {
       for (char k = 'A'; k<=ch; k++)
       {
           printf("%c ",k);
       }
       printf("\n");
    }*/
   /*int num=1;
    for (int i = 0; i <4; i++)
    {
       for (int j = 0; j<=i; j++)
       {
       printf("%d ", num++);
       }
       printf("\n");
    }*/
   /* char ch='A';
    for (char i = 0; i<4 ; i++)
    {
       for (char k = 0; k<=i; k++)
       {
       printf("%c ", ch++);
       }
       printf("\n");
    }*/
  /*int num=65;
    for (int i=0; i<4; i++)
    {
   for (int j = 0; j>=i; j--)
    {
      printf(" ");
   }
 for (int k = 0; k<=i; k++)
       {
       printf("%c", num++);
       }
       printf("\n");
}*/
   
  /* for (int i = 0; i < 4; i++)
    {
       for (int j = 4; j >=i; j--)
       {
        printf(" ");
       }
       for (int p = 0; p<=i; p++)
       {
          printf("* ");
       }
        printf("\n");
    }*/
  
    /*for (int i = 0; i < 4; i++)
    {
       for (int j = 0; j <=i; j++)
       {
        printf(" ");
       }
       for (int p = 4; p>i; p--)
       {
          printf("*");
       }
        printf("\n");
    }*/
   /*char num=65;
   for (char i = 0; i < 4; i++)
    {
       for (char j = 0; j <=i; j++)
       {
        printf(" ");
       }
       for (char p = 4; p>i; p--)
       {
          printf("%c ", num++);
       }
        printf("\n");
   }*/
char num=65;
  for (char i = 0; i <7; i++)
   {
      for (char k = 7; k >i; k--)
     {
        printf(" ");
     }
     for (char p = 0; p <i; p++)
     {
       printf("%c ", num++);
     }
     printf("\n");
}

}