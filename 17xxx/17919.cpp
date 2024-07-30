#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);
  stringstream ss(s); string t;

  int a = 0, b = 0;
  while (ss >> t) {
    if (t.find("ae") != string::npos) a++;
    b++;
  }
  return a * 5 >= b * 2;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "dae ae ju traeligt va" : "haer talar vi rikssvenska");
  return 0;
}