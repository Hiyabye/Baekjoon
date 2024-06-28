#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<vector<int> > board(9, vector<int>(9));
vector<pair<int, int> > blank;

void backtrack(int idx) {
  if (idx == blank.size()) {
    for (int i=0; i<9; i++) {
      for (int j=0; j<9; j++) {
        cout << board[i][j] << " ";
      }
      cout << "\n";
    }
    exit(0);
  }

  int x = blank[idx].first;
  int y = blank[idx].second;
  for (int i=1; i<=9; i++) {
    bool ok = true;
    for (int j=0; j<9; j++) {
      if (board[x][j] == i || board[j][y] == i) {
        ok = false;
        break;
      }
    }
    for (int j=0; j<3; j++) {
      for (int k=0; k<3; k++) {
        if (board[(x/3)*3+j][(y/3)*3+k] == i) {
          ok = false;
          break;
        }
      }
    }
    if (!ok) continue;
    board[x][y] = i;
    backtrack(idx+1);
    board[x][y] = 0;
  }
}

void solve(void) {
  for (int i=0; i<9; i++) {
    for (int j=0; j<9; j++) {
      cin >> board[i][j];
      if (board[i][j] == 0) {
        blank.push_back(make_pair(i, j));
      }
    }
  }

  backtrack(0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}