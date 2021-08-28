#include <iostream>
using namespace std;
 
 
int main() {

    int A[10];
    int B[10];
    int scoreA = 0;
    int scoreB = 0;
    char lastWin = 'D';
 
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < 10; i++) {
        if (A[i] > B[i]) {
            scoreA += 3;
            lastWin = 'A';
        }
        else if (A[i] < B[i]) {
            scoreB += 3;
            lastWin = 'B';
        }
        else {
            scoreA++;
            scoreB++;
        }
    }
    cout << scoreA << " " << scoreB << "\n";
 
    if (scoreA > scoreB) {
        cout << 'A';
    }
    else if (scoreA < scoreB) {
        cout << 'B';
    }
    else {
        cout << lastWin;
    }
 
    return 0;
}
