/* Recursive approach o(2^n) */
#include<stdio.h>

int Fibonacci(int N)
{
    if(N <= 1)
        return N;
    return Fibonacci(N-1) + Fibonacci(N-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("Fib(%d) = %d\n",n,Fibonacci(n));

    return 0;
}
