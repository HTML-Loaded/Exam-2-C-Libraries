//Code for CSCI 1101


#include <iostream> 
#include <cmath>
#include <string>

using namespace std; 

//void functions
void menu();
void addition();
void subtract();
void multiply();
void divide();
void squrt();
void power();
//double/int functions



int main()
{
    cout << "*****************************" << endl;
    cout << "  Multi Function Calculator  " << endl;
    cout << "*****************************" << endl;


    int choice;
    string name;

    cout << endl << "Enter your name: ";
    cin >> name;

    do
    {
        menu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            squrt();
            break;
        case 6:
            power();
            break;
        case 7:
            cout << "Goodbye! " << name << endl;
            break;
        default:
            cout << "Please enter a valid value (1-7)!" << endl;
            break;
        }
    } while (choice != 7);


    return 0;
}

void menu()
{
    cout << "1) Addition" << endl;
    cout << "2) Subtraction" << endl;
    cout << "3) Multiplication" << endl;
    cout << "4) Division" << endl;
    cout << "5) Square Root" << endl;
    cout << "6) Power" << endl;
    cout << "7) Quit" << endl;
    cout << "Choose an operation [1-7]: ";
}

void addition()
{
    double num1 = 0, num2 = 0, sum = 0;
    //clear here

    cout << "Please enter the first number to be added: ";
    cin >> num1;
    cout << "Please enter the second number to be added: ";
    cin >> num2;

    sum = num1 + num2;

    cout << num1 << " + " << num2 << " = " << sum << endl;
}

void subtract()
{
    double num1 = 0, num2 = 0, differ = 0;
    //clear here

    cout << "Please enter the first number to be subtracted: ";
    cin >> num1;
    cout << "Please enter the second number to be subtracted: ";
    cin >> num2;

    differ = num1 - num2;

    cout << num1 << " - " << num2 << " = " << differ << endl;
}

void multiply()
{
    double num1 = 0, num2 = 0, prod = 0;
    //clear here

    cout << "Please enter the first number to be multiplied: ";
    cin >> num1;
    cout << "Please enter the second number to be multiplied: ";
    cin >> num2;

    prod = num1 * num2;

    cout << num1 << " * " << num2 << " = " << prod << endl;
}

void divide()
{
    double num1 = 0, num2 = 0, quot = 0;
    //clear here

    cout << "Please enter the first number to be divided: ";
    cin >> num1;
    cout << "Please enter the second number to be divided: ";
    cin >> num2;

    quot = num1 / num2;

    cout << num1 << " / " << num2 << " = " << quot << endl;
}

void squrt()
{
    double num = 0, sq = 0;
    //clear here

    cout << "Please enter a number to be square rooted: ";
    cin >> num;

    sq = sqrt(num);

    cout << "√" << num << " = " << sq << endl;
}

void power()
{
    double num1 = 0, num2 = 0, pw = 0;
    //clear here

    cout << "Please enter the number to be raised: ";
    cin >> num1;
    cout << "Please enter the the power: ";
    cin >> num2;

    pw = pow(num1, num2);

    cout << num1 << "^" << num2 << " = " << pw << endl;
}
