#include <iostream>
using namespace std;
int main()
{
    int option,a,b;
    do
    {
        cout<<"\n"<<"***Calculator Mini***"<<"\n";
        cout<<"1.ADD"<<endl;
        cout<<"2.SUBTRACT"<<endl;
        cout<<"3.PRODUCT"<<endl;
        cout<<"4.DIVISION"<<endl;
        cout<<"5.Exit Calculator Mini"<<endl;
        cout<<"\n"<<"Enter Your Option"<<"\n";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"Enter any two numbers:"<<endl;
            cin>>a>>b;
            cout<<"Output:"<<" "<<a+b<<endl;
            break;
        case 2:
            cout<<"Enter any two numbers:"<<endl;
            cin>>a>>b;
            cout<<"Output:"<<" "<<a-b<<endl;
            break;
        case 3:
            cout<<"Enter any two numbers:"<<endl;
            cin>>a>>b;
            cout<<"Output:"<<" "<<a*b<<endl;
            break;
        case 4:
            cout<<"Enter any two numbers:"<<endl;
            cin>>a>>b;
            cout<<"Output:"<<" "<<a/b<<endl;
        }

    }while(option!=5);

    return 0;
}
