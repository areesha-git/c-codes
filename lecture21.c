#include <stdio.h>

int main()
{
    /* char name[] = "hii";
     for (int i = 0; name[i] != '\0'; i++)
     {
         printf("%c", name[i]);
     }

     // printf("name: %c", name[0]);*/
    // int i = 0;
    /*while (name[i] != '\0')
    {
        printf("%c\n", name[i]);
        i++;
    }*/

    // int ln = strlen(name);
    // printf("%d", ln);
    // char name[] = "hii";
    // char data[10];
    //  for (int i = 0; name[i]!='\0'; i++)
    //  {
    //     //printf("%c\n", name[i]);
    //     data[i]=name[i];
    //  }

    //  printf("%s",data);

   char name[]="madam";
   int ln = strlen(name);
   int isTrue=1;
   for (int i = 0; i < ln/2; i++)
   {
    if (name[i]!=name[ln-i-1])
    {
        isTrue=0;
        break;
    }
    
   }
   if (isTrue==1)
   {
    printf("palindrom haii");
   }
   else{
    printf("nhi hai");
   }
   
    return 0;
}