#include <iostream>
using namespace std;

int main()

{
    string name;
    float pay;
    float hours;
    float hourlypay=0;
    int employees;
    string empname;
    
    cout<<"how many employees you want to enter data for"<<endl;
    cin>>employees;
    
    float highest_pay=0;
    for(int i=1;i<=employees;i++)
    {
       
        cout<<endl;
        cout<<"Employee "<<i<<endl;    
        cout<<endl;
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your hourly pay"<<endl;
        cin>>pay;
        cout<<"Enter hours worked"<<endl;
        cin>>hours;
         hourlypay=pay/hours;
        cout<<"hourly pay: "<<hourlypay<<endl;

        
        if (hourlypay>highest_pay)
        {
            highest_pay=hourlypay;
            empname=name;
        }
        
        

    }

    cout<<endl;
    cout<<"employee with highest hourly pay is: "<<empname<<endl;
    cout<<"Highest hourly pay is: "<<highest_pay<<endl;
    cout<<endl;

    return 0;
    
}