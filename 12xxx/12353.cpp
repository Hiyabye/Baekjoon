#include <iostream>
#include <sstream>
#include <string>
using namespace std;

inline int feet(const string &s) {
  return stoi(s.substr(0, 1));
}

inline int inch(const string &s) {
  return stoi(s.substr(2, s.length()-3));
}

inline string print(int x) {
  return to_string(x/12) + "'" + to_string(x%12) + "\"";
}

void solve(int idx) {
  string s; getline(cin, s);
  stringstream ss(s);

  char a; string b, c; ss >> a >> b >> c;
  int ans = (feet(b) + feet(c)) * 12 + (inch(b) + inch(c)) + (a == 'B' ? 5 : -5);

  cout << "Case #" << idx << ": " << print((ans+1)/2-4) << " to " << print(ans/2+4) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  cin.ignore();
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}