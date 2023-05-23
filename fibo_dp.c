/*
In the Dynamic Programming,

1. We divide the large problem into multiple subproblems.

2. Solve the subproblem and store the result.

3. Using the subproblem result, we can build the solution for the large problem.

4. While solving the large problem, if the same subproblem occurs again, we can reuse the already stored result rather than recomputing it again. This is also called memoization.
*/

/*
Start computing result for the subproblem. Using the subproblem result solve another subproblem and finally solve the whole problem.
Algorithm
1. set Fib[0] = 0

2. set Fib[1] = 1

3. From index 2 to n compute result using the below formula

     Fib[index] = Fib[index - 1] + Fib[index - 2]

4. The final result will be stored in Fib[n].

*/

#include<stdio.h>

int Fibonacci(int N)
{
    //if N = 2, we need to store 3 fibonacci members(0,1,1)
    //if N = 3, we need to store 4 fibonacci members(0,1,1,2)
    //In general to compute Fib(N), we need N+1 size array.
    int Fib[N+1],i;

    //we know Fib[0] = 0, Fib[1]=1
    Fib[0] = 0;
    Fib[1] = 1;

    for(i = 2; i <= N; i++)
        Fib[i] = Fib[i-1]+Fib[i-2];

    //last index will have the result
    return Fib[N];
}

int main()
{
    int n;
    scanf("%d",&n);

    //if n == 0 or n == 1 the result is n
    if(n <= 1)
        printf("Fib(%d) = %d\n",n,n);
    else
        printf("Fib(%d) = %d\n",n,Fibonacci(n));

    return 0;
}


