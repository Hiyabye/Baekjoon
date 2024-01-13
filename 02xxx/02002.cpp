#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  map<string, int> m;
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    m[s] = i;
  }

  vector<int> v(n);
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    v[i] = m[s];
  }

  int ans = 0;
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      if (v[i] <= v[j]) continue;
      ans++;
      break;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}