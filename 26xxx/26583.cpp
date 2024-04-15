#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void solve(const string &s) {
  stringstream ss(s);
  vector<int> v; int x;
  while (ss >> x) v.push_back(x);

  cout << v[0] * v[1];
  for (int i=1; i<v.size()-1; i++) {
    cout << " " << v[i-1] * v[i] * v[i+1];
  }
  cout << " " << v[v.size()-2] * v[v.size()-1] << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (getline(cin, s)) solve(s);
  return 0;
}