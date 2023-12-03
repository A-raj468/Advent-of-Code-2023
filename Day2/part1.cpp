#include <bits/stdc++.h>
using namespace std;

#define RED 12
#define GREEN 13
#define BLUE 14

int extractId(const std::string &game)
{
    int n = game.length();
    int id = 0;
    for (int i = 5; i < n; i++)
    {
        char c = game[i];
        if (c == ':')
        {
            break;
        }
        int d = c - '0';
        id = id * 10 + d;
    }

    return id;
}

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
    int id = extractId(game);
    int red = extractColorCubes(game, 'r');
    int green = extractColorCubes(game, 'g');
    int blue = extractColorCubes(game, 'b');
    // cout << red << " " << green << " " << blue << endl;
    bool possible = (red <= RED) && (green <= GREEN) && (blue <= BLUE);
    return possible ? id : 0;
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