#include <iostream>
#include <vector>
using namespace std;

int one(int c, const vector<int> &h) {
  int ret = c;
  for (int i=3; i<c; i++) ret += (h[i] == h[i-1] && h[i-1] == h[i-2] && h[i-2] == h[i-3]);
  return ret;
}

int two(int c, const vector<int> &h) {
  int ret = 0;
  for (int i=1; i<c; i++) ret += (h[i] == h[i-1]);
  return ret;
}

int three(int c, const vector<int> &h) {
  int ret = 0;
  for (int i=2; i<c; i++) ret += (h[i-2] == h[i-1] && h[i-1] + 1 == h[i]);
  for (int i=1; i<c; i++) ret += (h[i-1] == h[i] + 1);
  return ret;
}

int four(int c, const vector<int> &h) {
  int ret = 0;
  for (int i=2; i<c; i++) ret += (h[i-2] == h[i-1] + 1 && h[i-1] == h[i]);
  for (int i=1; i<c; i++) ret += (h[i-1] + 1 == h[i]);
  return ret;
}

int five(int c, const vector<int> &h) {
  int ret = 0;
  for (int i=2; i<c; i++) ret += (h[i-2] == h[i-1] && h[i-1] == h[i]);
  for (int i=2; i<c; i++) ret += (h[i-2] == h[i-1] + 1 && h[i-1] + 1 == h[i]);
  for (int i=1; i<c; i++) ret += (h[i-1] + 1 == h[i]);
  for (int i=1; i<c; i++) ret += (h[i-1] == h[i] + 1);
  return ret;
}

int six(int c, const vector<int> &h) {
  int ret = 0;
  for (int i=2; i<c; i++) ret += (h[i-2] == h[i-1] && h[i-1] == h[i]);
  for (int i=2; i<c; i++) ret += (h[i-2] + 1 == h[i-1] && h[i-1] == h[i]);
  for (int i=1; i<c; i++) ret += (h[i-1] == h[i]);
  for (int i=1; i<c; i++) ret += (h[i-1] == h[i] + 2);
  return ret;
}

int seven(int c, const vector<int> &h) {
  int ret = 0;
  for (int i=2; i<c; i++) ret += (h[i-2] == h[i-1] && h[i-1] == h[i]);
  for (int i=2; i<c; i++) ret += (h[i-2] == h[i-1] && h[i-1] == h[i] + 1);
  for (int i=1; i<c; i++) ret += (h[i-1] == h[i]);
  for (int i=1; i<c; i++) ret += (h[i-1] + 2 == h[i]);
  return ret;
}

void solve(void) {
  int c, p; cin >> c >> p;
  vector<int> h(c);
  for (int i=0; i<c; i++) cin >> h[i];

  switch (p) {
    case 1: cout << one(c, h); break;
    case 2: cout << two(c, h); break;
    case 3: cout << three(c, h); break;
    case 4: cout << four(c, h); break;
    case 5: cout << five(c, h); break;
    case 6: cout << six(c, h); break;
    case 7: cout << seven(c, h); break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}