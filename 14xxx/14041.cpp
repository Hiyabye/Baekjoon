#include <iostream>
#include <string>
using namespace std;

int next(int t) {
  if (t >= 420 && t < 600) return 2;
  if (t >= 900 && t < 1140) return 2;
  return 1;
}

void solve(void) {
  string s; cin >> s;

  int t = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3, 2));
  for (int i=0; i<120; i++) t = (t + next(t)) % 1440;
  
  cout << (t / 60 < 10 ? "0" : "") << t / 60 << ":" << (t % 60 < 10 ? "0" : "") << t % 60;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}