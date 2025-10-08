#include <stdio.h>
#include <string.h> //for length

int main()
//{
{
     //left duplicat hello= helo
    //char str[] = "hello";
    // char str[]="hii";
    //  int ln = strlen(str);
    // for (int i = 0; i < ln; i++)
    // {
    //     int count = 0;

    //     for (int j = i + 1; j < ln; j++)
    //     {
    //         if (str[i] == str[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count == 0)
    //     {
    //         printf("%c", str[i]);
    //     }
    // }

    // for (int i = 0; i < ln; i++)
    // {
    //     int count = 0;

    //     for (int j = 0; j <i; j++)
    //     {
    //         if (str[i] == str[j])
    //         {
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 0)
    //     {
    //         printf("%c", str[i]);
    //     }
    // }


    char str[]="aeiouabvs";
    int ln = strlen(str);
        for (int i = 0; i < ln; i++)
    {
        int count = 0;

        for (int j =i+1; j <ln; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                
            }
        }
        if (count == 0)
       {
        if (str[i]=='a' ||str[i]=='e' || str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            printf("%c ", str[i]);
        }
        
     }


    
   
    }
     return 0;
}