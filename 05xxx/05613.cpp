#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, cur = 0;
  char op;

  cin >> cur;
  cin >> op;
  while (op != '=') {
    cin >> n;
    if (op == '+') cur += n;
    else if (op == '-') cur -= n;
    else if (op == '*') cur *= n;
    else if (op == '/') cur /= n;
    cin >> op;
  }
  cout << cur;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}