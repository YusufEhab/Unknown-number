#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
signed main() {
    srand(time(0));
    int bye = 0;
    do {
        int num = rand() % 100;
        int guess, cnt = 1;
        cout << "In our game you have to guess a number in range [0, 100]\nCan you do it? Here we go >>>>>" << endl;
        cin >> guess;
        while(true){
            if (guess == num) {
                cout << "Great job after " << cnt << " number of times you are right!" << endl;
                cout << "Enter 0 to go with a new round, any number to say bye" << endl;
                cin >> bye;
                break;
            } else if (guess > num) {
                cout << "less than that..." << endl;
                cin >> guess;
                ++cnt;
            } else {
                cout << "more than that..." << endl;
                cin >> guess;
                ++cnt;
            }
        }
    }while(bye == 0);
    cout << "See you later :)" << endl;
}
