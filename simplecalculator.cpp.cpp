
#include <iostream>
using namespace std;
int main()
{
//first and second number initialising with float data type
    float firstnumber, secondnumber;
    float answer;
    int selection;
    do
    {
        cout<<"1-addition\n";     // first choice addition
        cout<<"2-subtraction\n";   // second choice subtraction
        cout<<"3-multiplication\n";   // third choice multiplication
        cout<<"4-division\n";        //fourth choice divison
        cout<<"5- Exit\n\n";
        cout<<"Enter Your selection(1-5): ";
        cin>>selection;
        if(selection>=1 && selection<=4)
        {
            cout<<"\nenter  any two numbers: ";
            cin>>firstnumber>>secondnumber;
        }
        switch(selection)
        {
            case 1:
                answer = firstnumber+secondnumber;
                cout<<"\nanswer = "<<answer;
                break;
            case 2:
                answer= firstnumber-secondnumber;
                cout<<"\nanswer = "<<answer;
                break;
            case 3:
                answer = firstnumber*secondnumber;
                cout<<"\nanswer = "<<answer;
                break;
            case 4:
                answer = firstnumber/secondnumber;
                cout<<"\nanswer= "<<answer;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong selection!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(selection!=5);
    cout<<endl;
    return 0;
}
