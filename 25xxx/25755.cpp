#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int, char> mp = {
  {1, '1'}, {2, '5'}, {3, '?'},
  {4, '?'}, {5, '2'}, {6, '?'},
  {7, '?'}, {8, '8'}, {9, '?'}
};

void solve(void) {
  char w; int n; cin >> w >> n;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  if (w == 'L' || w == 'R') {
    for (int i=0; i<n; i++) {
      for (int j=n-1; j>=0; j--) {
        cout << mp[v[i][j]] << " ";
      }
      cout << "\n";
    }
  } else {
    for (int i=n-1; i>=0; i--) {
      for (int j=0; j<n; j++) {
        cout << mp[v[i][j]] << " ";
      }
      cout << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}