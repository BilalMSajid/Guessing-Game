#include <iostream>
using namespace std;

int main ()

{
    int a,b,c,d,e,x;
    float sum;
    float sum1;
    string a1;
    float percentage;
    int loss;
    x = 1;
    sum = 0;
    sum1 = 0;
    int y=0;
    while (x<=5)
    {
        cout<<endl;
        cout<<"Delivery "<<x<<" of 5"<<endl;
        cout<<"Enter the total value of delivery"<<endl;
        cin>>a;
        cout<<"Was the delivery on time?"<<endl;
        cin>>a1;
        sum = sum + a;
        
        if (a1=="yes")
        {
             y++;
            sum1 = sum1 + a;
          
        }
        else 
        {
             
            sum1 = sum1 + 0;
        }
        x++;

    }
     
        cout<<y<<endl;
        cout<<endl;
        cout<<"Summary:"<<endl;
        cout<<"Total Value of deliveries: "<<sum<<endl;
        cout<<"Total value of deliveries on time: "<<sum1<<endl;
        cout<<endl;
        percentage=((float(y)/5)*100);
        cout<<"Percentage of deliveries received on time: "<<percentage<<"%"<<endl;
        loss=sum-sum1;
        cout<<"Loss due to untimely deliveries: "<<loss<<endl;

    return 0;
    
}