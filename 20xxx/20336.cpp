#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<string>> v(n);
  for (int i=0; i<n; i++) {
    int d; cin >> d;
    for (int j=0; j<d; j++) {
      string s; cin >> s;
      v[i].push_back(s);
    }
  }

  cout << v[0].size() << "\n";
  for (int i=0; i<v[0].size(); i++) {
    cout << v[0][i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}