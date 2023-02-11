#include <iostream>

long long PowerReq(int x, int n)
{
    if (n == 0)
        return 1;

    return PowerReq(x, n - 1) * x;
}

long long FibLoop(int n)
{
    int f0 = 0;
    int f1 = 1;
    for (int i = 0; i < n; i++)
    {
        int temp = f0 + f1;
        f0 = f1;
        f1 = temp;
    }
    return f0;
}

long long FibReq(int n)
{
    static long long fibArray[100]{};

    if (n == 0 || n == 1)
        return n;

    if(fibArray[n] == 0)
        fibArray[n] = FibReq(n - 1) + FibReq(n - 2);

    return fibArray[n];
}

unsigned long long Hanoy(int n)
{
    if (n == 0) return 0;
    return Hanoy(n - 1) * 2 + 1;
}


int main()
{
    int n = 45;

    //std::cout << FibLoop(n) << "\n";
    //std::cout << FibReq(n) << "\n";
    std::cout << Hanoy(64)/60/60/24/365 << "\n";
}
