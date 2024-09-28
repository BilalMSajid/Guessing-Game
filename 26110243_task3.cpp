#include <iostream>
using namespace std;

int main ()

{
    int number;
    string operation;
    int ans;
    int num1;
    int num2;


    while (operation!="exit")
    {
        cout << "Enter Number" << endl;
        cin >> num1;
        cout << "Enter operation" << endl;
        cin >> operation;
        if (operation == "exit"){
        return 0;
    }
        cout << "Enter Number" << endl;
        cin >> num2;

    if (operation == "+")
    {
        ans = num1 + num2;
    }

    else if (operation == "-")
    {
        ans= num1-num2;
    }

    else if (operation == "*")
    {
        ans= num1*num2;
    }

    else if (operation == "/")
    {
        ans= num1/num2;
    }

        cout<< "The answer is "<<ans<<endl;
    }


        return 0;
}