#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    cout << "Type first number: " << endl;
    cin >> num1;
    cout << "Type second number: " << endl;
    cin >> num2;
    cout <<"Operator: " << endl;
    cin >> op;
    switch(op){
case '+':
            cout << num1 + num2;
        break;
case '-':
        cout << num1 - num2;
            break;
case '*':
            cout << num1 * num2;
            break;
case '/':
            cout << num1 / num2;
            break;
        default:
            cout << "Something went wrong :/";
            break;
    }
    return 0;
}

