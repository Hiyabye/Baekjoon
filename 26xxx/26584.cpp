#include <iostream>
#include <string>
using namespace std;

void solve(void) {
  string s; getline(cin, s);

  cout << s.substr(0, s.find(',')) << " -";

  int t = stoi(s.substr(s.find(',') + 1));
  if (t >= 525600) {
    cout << " " << t / 525600 << " year(s)";
    t %= 525600;
  }
  if (t >= 1440) {
    cout << " " << t / 1440 << " day(s)";
    t %= 1440;
  }
  if (t >= 60) {
    cout << " " << t / 60 << " hour(s)";
    t %= 60;
  }
  if (t >= 1) cout << " " << t << " minute(s)";
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t; cin.ignore();
  while (t--) solve();
  return 0;
}