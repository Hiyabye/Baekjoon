#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<char>> v;

inline void a(int s, int x) {
  for (int i=0; i<s; i++) v[0][x+i+1] = '-';
}

inline void b(int s, int x) {
  for (int i=0; i<s; i++) v[i+1][x] = '|';
}

inline void c(int s, int x) {
  for (int i=0; i<s; i++) v[i+1][x+s+1] = '|';
}

inline void d(int s, int x) {
  for (int i=0; i<s; i++) v[s+1][x+i+1] = '-';
}

inline void e(int s, int x) {
  for (int i=0; i<s; i++) v[2*s+1-i][x] = '|';
}

inline void f(int s, int x) {
  for (int i=0; i<s; i++) v[2*s+1-i][x+s+1] = '|';
}

inline void g(int s, int x) {
  for (int i=0; i<s; i++) v[2*s+2][x+i+1] = '-';
}

void solve(void) {
  int s; string n; cin >> s >> n;
  v.assign(2*s+3, vector<char>((s+3)*n.length(), ' '));
  for (int i=0; i<n.length(); i++) {
    int x = (s+3)*i;
    switch (n[i]) {
      case '0': a(s, x); b(s, x); c(s, x); e(s, x); f(s, x); g(s, x); break;
      case '1': c(s, x); f(s, x); break;
      case '2': a(s, x); c(s, x); d(s, x); e(s, x); g(s, x); break;
      case '3': a(s, x); c(s, x); d(s, x); f(s, x); g(s, x); break;
      case '4': b(s, x); c(s, x); d(s, x); f(s, x); break;
      case '5': a(s, x); b(s, x); d(s, x); f(s, x); g(s, x); break;
      case '6': a(s, x); b(s, x); d(s, x); e(s, x); f(s, x); g(s, x); break;
      case '7': a(s, x); c(s, x); f(s, x); break;
      case '8': a(s, x); b(s, x); c(s, x); d(s, x); e(s, x); f(s, x); g(s, x); break;
      case '9': a(s, x); b(s, x); c(s, x); d(s, x); f(s, x); g(s, x); break;
    }
  }

  for (int i=0; i<2*s+3; i++) {
    for (int j=0; j<(s+3)*n.length(); j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}