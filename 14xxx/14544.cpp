#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve(int idx) {
  int n, m; cin >> n >> m;
  map<string, int> mp;
  while (n--) {
    string s; cin >> s;
    mp[s] = 0;
  }

  while (m--) {
    string x, c; int r; cin >> x >> r >> c;
    mp[x] += r;
  }

  int mx = 0, cnt = 0;
  for (auto it : mp) {
    if (it.second > mx) {
      mx = it.second;
      cnt = 1;
    } else if (it.second == mx) {
      cnt++;
    }
  }

  if (cnt > 1) {
    cout << "VOTE " << idx << ": THERE IS A DILEMMA\n";
    return;
  }

  for (auto it : mp) {
    if (it.second == mx) {
      cout << "VOTE " << idx << ": THE WINNER IS " << it.first << " " << it.second << "\n";
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int p; cin >> p;
  for (int i=1; i<=p; i++) solve(i);
  return 0;
}