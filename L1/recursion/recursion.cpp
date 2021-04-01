#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    fun(n - 1);
}

int fact(int n)
{
    // base case
    if (n == 1)
        return 1;
    // assumption
    int nextFact = fact(n - 1);
    //selfwork
    return n * nextFact;
}
long long int nthFibonacci(long long int n)
{
    // base case
    if (n == 1 || n == 2)
        return 1;
    // assume
    int first = nthFibonacci(n - 1);
    int second = nthFibonacci(n - 2);

    // self work
    return first + second;
}

int tribonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    int first = tribonacci(n - 1);
    int second = tribonacci(n - 2);
    int third = tribonacci(n - 3);
    return first + second + third;
}
void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif
}
int32_t main()
{
    file_i_o();
    int n = 7;
    cout << fact(n);
}