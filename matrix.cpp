//? Header Files and namespaces
#include<bits/stdc++.h>
using namespace std;

//? Code Shortners
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define POP pop_back
#define len(s) (int)s.size()
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define PannDev ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define slv solve();

ll mod = 1e9+7;

//? void
void solve() {
    
    // row (vertikal)
    // collumn (horizontal)

    int row, col;
    cout << "input row : "; cin >> row;
    cout << "input col : "; cin >> col;
    cout << endl;

    int array[row][col];
    int rowcol = row * col;

    cout << "input " << rowcol << " element : " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> array[i][j];
        }
    } cout << endl;

    cout << "array[" << row << "][" << col << "]" << " : " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    } cout << endl;

    cout << "array n-element : " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "array [" << i << "][" << j << "]" << " : " << array[i][j] << endl;  
        }
    } cout << endl;
    
}

//! main
int main () { PannDev 

    char yn;
    do
    {
        solve(); // run solve first
        cout << "Continue? [y/n]: ";
        cin >> yn;
        // system("clear");
        cout << endl;
    } while (yn == 'y' || yn == 'Y');

    return 0; 
    
    }
