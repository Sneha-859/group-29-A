//write a c program for finding the sum of individual digits of a given number.
#include<stdio.h>
int main(){
    int n,temp,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n%10;
        sum=sum+temp;
        n/=10;
    }
    printf("sum of digits=%d",sum);
    return 0;
}
