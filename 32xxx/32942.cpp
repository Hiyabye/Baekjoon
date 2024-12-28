#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve(void) {
  int a, b, c; cin >> a >> b >> c;

  map<int, vector<int>> mp;
  if (a) {
    for (int i=1; i<=10; i++) {
      if ((c-b*i) % a) continue;
      mp[(c-b*i)/a].push_back(i);
    }
  } else {
    for (int i=1; i<=10; i++) {
      if ((c-a*i) % b || (c-a*i)/b < 1 || (c-a*i)/b > 10) continue;
      mp[i].push_back((c-a*i)/b);
    }
  }

  for (int i=1; i<=10; i++) {
    if (mp.find(i) == mp.end()) mp[i].push_back(0);
    for (int x : mp[i]) cout << x << " ";
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}