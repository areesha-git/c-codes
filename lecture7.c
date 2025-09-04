#include<stdio.h>
 int main(){
    int n;
    int primenumber=1;
    printf("enter the number:");
    scanf("%d",&n);
    if (n<=1){
        printf("prime number nhi hai");
        
    }
    for ( int i=2; i <n; i++)
    {
        if (n%i==0)
        {
            primenumber=0;
            break;
        }
    }
    if (primenumber){
            printf("primenumber  hai ");
    }else{
            printf("primenumber nhi hai");
    }
    return 0;
}