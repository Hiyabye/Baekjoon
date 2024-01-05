#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  vector<vector<char> > v(15, vector<char>(15));
  for (int i=0; i<15; i++) for (int j=0; j<15; j++) cin >> v[i][j];

  for (int i=0; i<15; i++) {
    for (int j=0; j<15; j++) {
      switch (v[i][j]) {
        case 'w': cout << "chunbae"; return;
        case 'b': cout << "nabi"; return;
        case 'g': cout << "yeongcheol"; return;
      }
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}