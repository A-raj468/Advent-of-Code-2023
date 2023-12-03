#include <bits/stdc++.h>
using namespace std;

int extractColorCubes(const std::string &game, char color)
{
    int n = game.length();

    int cubes = 0;
    int final_cubes = 0;
    for (int i = 0; i < n; i++)
    {
        char c = game[i];
        if (c >= '0' && c <= '9')
        {
            int d = c - '0';
            cubes = cubes * 10 + d;
            if ((game[i + 1] < '0' || game[i + 1] > '9') && (game[i + 2] == color))
            {
                final_cubes = max(final_cubes, cubes);
                cubes = 0;
            }
        }
        else
        {
            cubes = 0;
        }
    }

    return final_cubes;
}

int testcase()
{
    string game;
    getline(cin, game);
    int red = extractColorCubes(game, 'r');
    int green = extractColorCubes(game, 'g');
    int blue = extractColorCubes(game, 'b');
    return red * green * blue;
}

int main()
{
    int t;
    cin >> t;
    string dummy;
    getline(cin, dummy);
    int sum = 0;
    while (t--)
    {
        sum += testcase();
    }
    cout << sum << endl;
}