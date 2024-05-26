#include <iostream>
#include <vector>
using namespace std;

const vector<vector<char>> v = {
  {'G', '.', '.', '.'},
  {'.', 'I', '.', 'T'},
  {'.', '.', 'S', '.'},
};

void solve(void) {
  int k; cin >> k;

  for (int a=0; a<3; a++) for (int b=0; b<k; b++) {
    for (int c=0; c<4; c++) for (int d=0; d<k; d++) {
      cout << v[a][c];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}