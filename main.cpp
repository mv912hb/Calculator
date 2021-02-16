# include <iostream>
using namespace std;

int main()
{
    char operation;
    float a, b;

    cout << "Insert first number: ";
    cin >> a;

    cout << "Choose an operation +, -, *, / : ";
    cin >> operation;

    cout << "Insert second number: ";
    cin >> b;

    switch(operation)
    {
        case '+':
            cout << a+b;
            break;

        case '-':
            cout << a-b;
            break;

        case '*':
            cout << a*b;
            break;

        case '/':
            cout << a/b;
            break;

        default:
            cout << "No operation available!";
            break;
    }

    return 0;
}
