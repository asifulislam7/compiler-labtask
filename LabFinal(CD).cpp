#include <iostream>
using namespace std;

int main() {


    string test[5] = {"ab", "aab", "baba", "abb", "ba"};


    for(int t = 0; t < 5; t++) {

        string s = test[t];
        int state = 0;

        cout << "\nString: " << s << endl;
        cout << "Start at q0" << endl;


        for(int i = 0; i < s.length(); i++) {

            char ch = s[i];


            if(state == 0) {
                if(ch == 'a') {
                    cout << "q0 --a--> q1" << endl;
                    state = 1;
                }
                else {
                    cout << "q0 --b--> q0" << endl;
                    state = 0;
                }
            }


            else if(state == 1) {
                if(ch == 'a') {
                    cout << "q1 --a--> q1" << endl;
                    state = 1;
                }
                else {
                    cout << "q1 --b--> q2" << endl;
                    state = 2;
                }
            }


            else if(state == 2) {
                if(ch == 'a') {
                    cout << "q2 --a--> q1" << endl;
                    state = 1;
                }
                else {
                    cout << "q2 --b--> q0" << endl;
                    state = 0;
                }
            }
        }


        if(state == 2)
            cout << "Result: Accepted" << endl;
        else
            cout << "Result: Rejected" << endl;
    }

    return 0;
}
