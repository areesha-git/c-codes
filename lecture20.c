#include <stdio.h>
// convert 2D to 1D array
/*int main() {
    int arr[2][2]={{2,4},{5,7}};
    int arr1[4];
    int k=0;
     for (int i = 0; i < 2; i++)
     {
        for (int j = 0; j < 2; j++)
        {
            arr1[k]=arr[i][j];
            k++;
        }

     }
     for (int k = 0; k < 4; k++)
     {
       printf("%d", arr1[k]);

     }


     return 0;
}*/

/*int main() {
    int arr[3][3]={{1,2,4},{5,6,7},{8,9,10}};
   int res=0;
   for (int i = 0; i < 3; i++)
   {
      for (int j =0 ; i >3; j--)
      {
        printf("%d", arr[i][j]);
      }

   }

    return 0;
}*/
int main()
{
    int arr[5] = {1, -4, 6, 7, 3};
    int k = 3;
    int wsum = 0;
    for (int i = 0; i < k; i++)
    {
        wsum += arr[i];
    }
    int maxsum = wsum;
    for (int j = k; j < 5; j++)
    {
        wsum = maxsum + arr[j] - arr[j - k];
        if (wsum > maxsum)
        {
            maxsum = wsum;
        }
      
    }
      printf("%d", maxsum);
}