#include <iostream>
#include <vector>

using namespace std;

const int DIRECTIONS[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};  // Directions for north, south, east, west

void simulateLiquidFlow(vector<int>& terrain, int n) {
    int waterLevel = terrain[n / 2][n / 2];  // Start with water level at the central cell
    vector<vector<char>> waterMap(n, vector<char>(n, '.'));  // Initialize water map with dry cells
    waterMap[n / 2][n / 2] = 'W';  // Mark the central cell as wet

    bool reachedEdge = false;
    while (!reachedEdge) {
        cout << "----------\n";
        cout << "Current water level: " << waterLevel << endl;
        printWaterMap(waterMap);

        bool waterFlowed = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (waterMap[i][j] == 'W') {  // Check for wet cells
                    for (const auto& dir : DIRECTIONS) {
                        int newRow = i + dir[0];
                        int newCol = j + dir[1];
                        if (isValidCell(newRow, newCol, n) && terrain[newRow][newCol] <= waterLevel) {
                            waterMap[newRow][newCol] = 'W';
                            waterFlowed = true;
                        }
                    }
                }
            }
        }

        if (!waterFlowed) {
            waterLevel++;
            cout << "Cannot flow, increasing water level to " << waterLevel << endl;
        } else {
            reachedEdge = hasWaterReachedEdge(waterMap, n);
        }
    }

    cout << "Solution:\n";
    printWaterMap(waterMap);
}

bool isValidCell(int row, int col, int n) {
    return row >= 0 && row < n && col >= 0 && col < n;
}

bool hasWaterReachedEdge(const vector<vector<char>>& waterMap, int n) {
    for (int i = 0; i < n; i++) {
        if (waterMap[0][i] == 'W' || waterMap[n - 1][i] == 'W' || waterMap[i][0] == 'W' || waterMap[i][n - 1] == 'W') {
            return true;
        }
    }
    return false;
}

void printWaterMap(const vector<vector<char>>& waterMap) {
    for (int i = 0; i < waterMap.size(); i++) {
        for (int j = 0; j < waterMap[i].size(); j++) {
            cout << waterMap[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> terrain(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> terrain[i][j];
        }
    }

    simulateLiquidFlow(terrain, n);

    return 0;
}
