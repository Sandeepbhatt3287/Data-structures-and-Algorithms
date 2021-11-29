#include<iostream>

#include<vector>

using namespace std;
// asf -> answer so far
void floodfill((vector<vector<int>> maze, int sr, int sc, string asf) {

//write your code here

}

int main() {
  int n, m;
  cin >> n >> m;
  vector < vector < int >> arr(n, vector < int > (m));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  floodfill(arr, 0, 0, "");
}
