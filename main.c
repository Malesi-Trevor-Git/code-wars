#include <stdio.h>
int fibonacci(int n)
{
    int result = 1, i = 1;
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        for (i=1; i<=n; i++) {
            result*=i;
        }  
        return result;
    }
}
int main()
{
    printf("%d\n", fibonacci(10));
}
