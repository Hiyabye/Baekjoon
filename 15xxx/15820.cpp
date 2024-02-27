#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int s1, s2; cin >> s1 >> s2;
  vector<pair<int, int>> v(s1+s2);
  for (int i=0; i<s1+s2; i++) cin >> v[i].first >> v[i].second;

  for (int i=0; i<s1; i++) {
    if (v[i].first != v[i].second) {
      cout << "Wrong Answer";
      return;
    }
  }

  for (int i=s1; i<s1+s2; i++) {
    if (v[i].first != v[i].second) {
      cout << "Why Wrong!!!";
      return;
    }
  }

  cout << "Accepted";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}