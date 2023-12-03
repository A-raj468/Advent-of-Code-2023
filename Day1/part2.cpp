#include <bits/stdc++.h>
using namespace std;

int forward_pass(string &s)
{
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' || s.substr(i, 4) == "zero")
        {
            return 0;
        }
        if (s[i] == '1' || s.substr(i, 3) == "one")
        {
            return 1;
        }
        if (s[i] == '2' || s.substr(i, 3) == "two")
        {
            return 2;
        }
        if (s[i] == '3' || s.substr(i, 5) == "three")
        {
            return 3;
        }
        if (s[i] == '4' || s.substr(i, 4) == "four")
        {
            return 4;
        }
        if (s[i] == '5' || s.substr(i, 4) == "five")
        {
            return 5;
        }
        if (s[i] == '6' || s.substr(i, 3) == "six")
        {
            return 6;
        }
        if (s[i] == '7' || s.substr(i, 5) == "seven")
        {
            return 7;
        }
        if (s[i] == '8' || s.substr(i, 5) == "eight")
        {
            return 8;
        }
        if (s[i] == '9' || s.substr(i, 4) == "nine")
        {
            return 9;
        }
    }
    return -1;
}

int backward_pass(string &s)
{
    int n = s.length();
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0' || s.substr(i, 4) == "zero")
        {
            return 0;
        }
        if (s[i] == '1' || s.substr(i, 3) == "one")
        {
            return 1;
        }
        if (s[i] == '2' || s.substr(i, 3) == "two")
        {
            return 2;
        }
        if (s[i] == '3' || s.substr(i, 5) == "three")
        {
            return 3;
        }
        if (s[i] == '4' || s.substr(i, 4) == "four")
        {
            return 4;
        }
        if (s[i] == '5' || s.substr(i, 4) == "five")
        {
            return 5;
        }
        if (s[i] == '6' || s.substr(i, 3) == "six")
        {
            return 6;
        }
        if (s[i] == '7' || s.substr(i, 5) == "seven")
        {
            return 7;
        }
        if (s[i] == '8' || s.substr(i, 5) == "eight")
        {
            return 8;
        }
        if (s[i] == '9' || s.substr(i, 4) == "nine")
        {
            return 9;
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