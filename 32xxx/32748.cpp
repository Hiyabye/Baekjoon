#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  vector<int> p(10), q(10);
  for (int i=0; i<10; i++) {
    int x; cin >> x;
    p[i] = x; q[x] = i;
  }
  string fa, fb; cin >> fa >> fb;

  string a, b;
  for (char c : fa) a += to_string(q[c - '0']);
  for (char c : fb) b += to_string(q[c - '0']);

  string d = to_string(stoi(a) + stoi(b));
  for (char c : d) cout << p[c - '0'];
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}