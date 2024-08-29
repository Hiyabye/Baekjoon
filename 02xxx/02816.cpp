#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  if (v[0] != "KBS1") {
    int cur = 0;
    while (v[cur] != "KBS1") {
      cout << "1";
      cur++;
    }
    while (cur--) {
      cout << "4";
      swap(v[cur], v[cur+1]);
    }
  }

  if (v[1] != "KBS2") {
    int cur = 0;
    while (v[cur] != "KBS2") {
      cout << "1";
      cur++;
    }
    while (cur-- > 1) {
      cout << "4";
      swap(v[cur], v[cur+1]);
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}