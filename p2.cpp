#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "What is your number? ";
    cin >> num;
    if (1 == num%2) {
        cout << "Your number is odd" << endl;
    }
        else {
            cout << "Your number is even" << endl;
        }
}