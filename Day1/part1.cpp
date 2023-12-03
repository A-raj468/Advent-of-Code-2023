#include <bits/stdc++.h>
using namespace std;

int forward_pass(string &s)
{
    for (char c : s)
    {
        if (c >= '0' and c <= '9')
        {
            return c - '0';
        }
    }
    return -1;
}

int backward_pass(string &s)
{
    for (auto it = s.rbegin(); it != s.rend(); it++)
    {
        char c = *it;
        if (c >= '0' and c <= '9')
        {
            return c - '0';
        }
    }
    return -1;
}

int testcase()
{
    string s;
    cin >> s;
    int first = forward_pass(s);
    int second = backward_pass(s);

    return first * 10 + second;
}

int main()
{
    int t;
    cin >> t;
    int sum = 0;
    while (t--)
    {
        sum += testcase();
    }
    cout << sum << endl;
}