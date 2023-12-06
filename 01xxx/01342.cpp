#include <iostream>
#include <string>
#include <vector>
using namespace std;

string s;
int n;
vector<bool> visited;

int backtrack(int idx, char prev) {
  if (idx == n) return 1;

  int ret = 0;
  for (int i=0; i<n; i++) {
    if (visited[i] || s[i] == prev) continue;
    visited[i] = true;
    ret += backtrack(idx+1, s[i]);
    visited[i] = false;
  }
  return ret;
}

void solve(void) {
  cin >> s;
  n = s.length();
  visited.resize(n, false);

  int ans = backtrack(0, ' ');
  for (int i=0; i<n; i++) {
    int cnt = 1;
    for (int j=i+1; j<n; j++) {
      if (s[i] == s[j]) cnt++;
    }
    ans /= cnt;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}