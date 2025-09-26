#include <stdio.h>
// int swap(int *x, int*y){
//    int temp=*x;
//    *x=*y;
//   *y=temp;
// return 0;
//}
// int main() {
//    int x=30;
//    int y=20;
//    swap(&x,&y);
//    printf("x=%d y=%d\n" , x,y);
//     return 0;
//}
/*int swap(int *a, int *b)
{
    int *a=*b;
     *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return 1 ;
}
int main()
{
    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
}*/

/*int main(){
    int arr[4]={1,2,3,4};
    int*p =arr;
    for (int i = 3; i >= 0; i--)
    {
        printf("%d",*(p+i));
    }
    
    return 0;
}*/

//2D array

/*int main(){
  int arr[3][3]={{1,2,3} ,{4,5,6},{7,8,9}};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0;j < 3; j++)
    {
        printf("%d",arr[i][j]);
    }
    printf(" ");
  }
  return 0;
}*/
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int sum=0;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum=sum+arr[i][j];
           
            
//         }printf(" ");
//         printf("%d",sum);
//     }
//     return 0;
// }