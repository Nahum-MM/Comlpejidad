#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=45;
    printf("Numero calculado %d en posicion",fibo(n),n);
}
int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(n>1)
    {
        return fibo(n-1) + fibo(n-2);
    }
}
