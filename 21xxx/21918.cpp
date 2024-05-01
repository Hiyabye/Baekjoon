#include <iostream>
#include <vector>
using namespace std;

void one(vector<int> &s, int i, int x) {
  s[i] = x;
}

void two(vector<int> &s, int b, int c) {
  for (int i=b; i<=c; i++) s[i] ^= 1;
}

void three(vector<int> &s, int b, int c) {
  for (int i=b; i<=c; i++) s[i] = 0;
}

void four(vector<int> &s, int b, int c) {
  for (int i=b; i<=c; i++) s[i] = 1;
}

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> s(n);
  for (int i=0; i<n; i++) cin >> s[i];

  while (m--) {
    int a, b, c; cin >> a >> b >> c;
    if (a == 1)      one(s, --b, c);
    else if (a == 2) two(s, --b, --c);
    else if (a == 3) three(s, --b, --c);
    else             four(s, --b, --c);
  }

  for (int i=0; i<n; i++) cout << s[i] << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}