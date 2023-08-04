#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  bool flag = false;
  string s;

  for (int i=1; i<=5; i++) {
    cin >> s;
    for (int j=0; j<s.size()-2; j++) {
      if (s.substr(j, 3) == "FBI") {
        cout << i << " ";
        flag = true;
        break;
      }
    }
  }

  if (!flag) {
    cout << "HE GOT AWAY!";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}