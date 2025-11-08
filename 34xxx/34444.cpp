#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool solve(void) {
  vector<vector<int>> v(9, vector<int>(9));
  for (int i=0; i<9; i++) for (int j=0; j<9; j++) cin >> v[i][j];

  for (int i=0; i<9; i++) {
    set<int> s;
    for (int j=0; j<9; j++) s.insert(v[i][j]);
    for (int j=1; j<=9; j++) {
      if (s.find(j) == s.end()) return false;
    }
  }

  for (int i=0; i<9; i++) {
    set<int> s;
    for (int j=0; j<9; j++) s.insert(v[j][i]);
    for (int j=1; j<=9; j++) {
      if (s.find(j) == s.end()) return false;
    }
  }

  for (int i=0; i<3; i++) for (int j=0; j<3; j++) {
    set<int> s;
    for (int x=0; x<3; x++) for (int y=0; y<3; y++) s.insert(v[3*i+x][3*j+y]);
    for (int j=1; j<=9; j++) {
      if (s.find(j) == s.end()) return false;
    }
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "VALID" : "INVALID!");
  return 0;
}