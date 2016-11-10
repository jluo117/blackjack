#include <iostream>
using namespace std;

void menu();
void add();
void subtract();
void kill();
void multiply();
void divide();
void returnpoint();


void add()
{
  double number1; 
  double number2;
  double answer;
  cout << " You have chosen addition. " << endl;
  cout << "Please enter your first number: ";
  cin  >> number1;
  cout << "Please enter your second number: ";
  cin  >> number2;
  cout << endl;
  answer = number1 + number2;
  cout << "The sum of your numbers is: " << answer << endl;
  returnpoint();
}

void subtract()
{
    double number1;
    double number2;
    double answer;
    cout << " You have chosen subtraction. " << endl;
    cout << " Please enter your first number: ";
    cin  >> number1;
    cout << "Please enter your second number: ";
    cin  >> number2;
    answer = number1 - number2; 
    cout << "The sum of your numbers is: " << answer;
    returnpoint();
}

void multiply()
{
    double number1;
    double number2;
    double answer;
    cout << "You have chosen multiplication!" << endl;
    cout << "Please enter your first number: ";
    cin  >> number1;
    cout << "Please enter your second number: ";
    cin  >> number2;
    answer = number1 * number2;
    cout << "The product of your numbers is: " << answer << endl;
    returnpoint();
}

void divide()
{
    double number1;
    double number2;
    double answer;
    cout << "You have chosen division!" << endl;
    cout << "Please enter your first number: " ;
    cin  >> number1;
    cout << endl;
    cout << "Please enter your second number: " ;
    cin  >> number2;
    cout << endl;
    answer = number1 / number2;
    cout << "Your answer is: " << answer;
    returnpoint();
}
void kill()
{
    int input2;
    cout << "You have chosen to kill the program. Are you sure? " << endl;
    cout << "\t[1] yes." << endl;
    cout << "\t[2] no." << endl;
    cin >> input2;
        if (input2 == 1)
        {
            cout << "SEE YA!" << endl;
        }
        else if (input2 == 2)
        {
            menu();
        }
    
}
void selection(){
    int input;
        cin >> input;
        if (input == 1)
        {
            add();
        }
        else if (input ==2)
        {
            subtract();
        }
        else if (input == 3)
        {
            multiply();
        }
        else if (input == 4)
        {
            divide();
        }
        else if (input == 5)
        {
            kill();
        }
        else
        {
            cout << "You have entered an invalid character or number.\nPlease select a valid option." << endl;
            cout << endl;
            cout << endl;
            menu();
        }
    }
void menu()
    {
        
        cout << "<-----Welcome to Calculator (Alpha)---->" << std::endl;
        cout << "\t[1] Add" << std::endl;
        cout << "\t[2] Subtract" << std::endl;
        cout << "\t[3] Multiply" << endl;
        cout << "\t[4] Divide" << endl;
        cout << "\t[5] Exit" << endl;
        cout << "Please Input the appropriate number selection." << endl;
        selection();
    }
    
void returnpoint()
{
    int input1;
    cout << " Would you like to return to the selection screen? " << endl;
    cout << "\t[1] Yes" << endl;
    cout << "\t[2] No" << endl;
    cin >> input1;
        if (input1 == 1)
        {
            menu();
        }
        else
        {
            kill();
        }
        
}


int main() 
{
    menu();
    return 0;
}
