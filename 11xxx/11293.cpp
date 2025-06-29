#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  int a; cin >> a; cin.ignore();
  vector<string> v(a);
  for (int i=0; i<a; i++) {
    getline(cin, v[i]);
    while (v[i].find(' ') != string::npos) v[i].erase(v[i].find(' '), 1);
  }
  int l; cin >> l;

  cout << "Customer " << idx << "\n";
  while (l--) {
    int b, c, d; char e, f; cin >> b >> c >> d >> e >> f; b--; c--; d--;
    cout << (v[b][c] == e && v[b][d] == f ? "correct" : "error") << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int c; cin >> c;
  for (int i=1; i<=c; i++) solve(i);
  return 0;
}