#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool done(vector< vector<int> > board) {
    vector< vector<int> > cols(board.size());
    for (int i = 0; i < board.size(); ++i) {
        vector<int> tmp = board[i];
        sort(tmp.begin(), tmp.end());
        
        if (tmp != board[i])
            return false;
    }
    
    for (int j = 0; j < board.size(); ++j) {
        for (int i = 0; i < board.size(); ++i) {
            cols[j].push_back(board[i][j]);
        }
        
        vector<int> tmp = cols[j];
        sort(tmp.begin(), tmp.end());
        
        if (tmp != cols[j])
            return false;
    }
    
    return true;
}

vector< vector<int> > rotate(vector < vector<int> > board) {
    vector< vector<int> >rotated(board.size());
    for (int j = 0; j < board.size(); ++j)
    for (int i = (int) board.size() - 1; i >= 0; --i)
        rotated[j].push_back(board[i][j]);
    return rotated;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    vector< vector<int> > board;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        vector<int> r;
        board.push_back(r);
        for (int j = 0; j < n; ++j) {
            cin >> x;
            board[i].push_back(x);
        }
    }
    
    for (int k = 0; k < 4; ++k) {
        board = rotate(board);
        if (done(board)) {
            for(int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    cout << board[i][j] << " ";
                }
                cout << "\n";
            }
        }
    }
    
    return 0;
}
