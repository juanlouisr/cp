#include <bits/stdc++.h>
using namespace std;
#define ll long long


vector<pair<int,int>> directions = {{0, 1}, {-1, 0}, {1, 0}, {0, -1}};


void floodFillHelper(vector<vector<int>>& image, int sr, int sc, int color, int startColor) {
    if (sr < 0 || sr > image.size() - 1)
    {
        return;
    }
    if (sc < 0 || sc > image[0].size() - 1)
    {
        return;
    }
    if (image[sr][sc] == startColor && image[sr][sc] != color) 
    {

        image[sr][sc] = color;
        for (auto direction : directions) {
            floodFillHelper(image, sr+direction.first, sc+direction.second, color, startColor);
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    floodFillHelper(image, sr, sc, color, image[sr][sc]);
    return image;
}


int main() 
{
    vector<vector<int>> image = {{0,0,0},{0,0,0},{0,0,0}};
    floodFill(image, 1, 1, 2);

    for (auto img : image) {
        for (int px : img) {
            cout << px << " ";
        }
    }

    return 0;
}