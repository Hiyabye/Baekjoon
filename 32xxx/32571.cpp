#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  queue<string> q;
  while (q.size() < 31) {
    for (int i=0; i<n; i++) {
      if (v[i].find("rest") != string::npos) {
        q.push("😎");
      } else if (v[i].find("leg") != string::npos) {
        q.push("🦵");
      } else {
        q.push("💪");
      }
    }
  }

  for (int i=1; i<=4; i++) {
    cout << i << " ";
    for (int j=0; j<7; j++) {
      cout << q.front(); q.pop();
    }
    cout << "\n";
  }
  cout << "5 ";
  for (int i=0; i<3; i++) {
    cout << q.front(); q.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}