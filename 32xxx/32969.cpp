#include <iostream>
#include <string>
using namespace std;

bool solve(void) {
  string s; getline(cin, s);

  return s.find("social") != string::npos ||
         s.find("history") != string::npos ||
         s.find("language") != string::npos ||
         s.find("literacy") != string::npos;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "digital humanities" : "public bigdata");
  return 0;
}