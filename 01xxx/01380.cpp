#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;
  cin.ignore();

  vector<pair<string, int>> v(n);
  for (int i=0; i<n; i++) {
    getline(cin, v[i].first);
    v[i].second = 0;
  }

  for (int i=0; i<2*n-1; i++) {
    int a; char b; cin >> a >> b; a--;
    v[a].second |= (b == 'A' ? 1 : 2);
  }

  int ans = -1;
  for (int i=0; i<n; i++) {
    if (v[i].second == 3) continue;
    ans = i;
    break;
  }
  cout << idx << " " << v[ans].first << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}