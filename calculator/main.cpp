#include <iostream>

using namespace std;


int main()
{
    while(true){
        string oper;
        int num1;
        int num2;
        system("CLS");
        cout << "please enter first num: ";
        cin >> num1;
        cout<< "please enter second num: ";
        cin >> num2;
        cout<<"please type the name of the operator: ";
        cin >> oper;
        if(oper=="add"){
            cout<<"the answer is "<<num1+num2;
        }else if(oper=="sub"){
            cout<<"the answer is "<<num1-num2;
        }else if(oper=="devide"){
            cout<<"the answer is "<<num1/num2;
        }else if(oper=="multiply"){
            cout<<"the answer is "<<num1*num2;
        }
    }

}
