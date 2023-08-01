#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  string n;
  cin >> n;

  int sum = 0;
  bool zero = false;
  for (int i=0; i<n.size(); i++) {
    sum += n[i] - '0';
    if (n[i] == '0') zero = true;
  }

  if (!zero || sum % 3 != 0) {
    cout << "-1";
    return;
  }

  sort(n.begin(), n.end(), greater<char>());
  cout << n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}