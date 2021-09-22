#include <iostream>
#include <sstream>
#include <string>

using namespace std;
void helloworld(){

    string question;
    cout << "currency name convert to: ";
    cin >> question;
    int question2;
    cout << "enter the number of currency amount to bdt: ";
    cin >> question2;
    if(question=="usd"){
        system("cls");
        cout << "it's "<<question2*85.334 << " bdt from " <<question2<<" usd" << endl;
    }else if(question=="pound"){
        system("cls");
        cout << "it's "<<question2*117.253  << " bdt from " <<question2<<" pounds"<< endl;
    }else if(question=="euro"){
        system("cls");
        cout << "it's "<<question2*100.062 << " bdt from " <<question2<<" euro"<<endl;
    }else if(question=="aud"){
        system("cls");
        cout << "it's "<<question2*62.004  << " bdt from " <<question2<<" australian dollars"<< endl;
    }else if(question=="nzd"){
        system("cls");
        cout << "it's "<<question2*60.067  << " bdt from " <<question2<<" newzealand dollar"<< endl;
    }else if(question=="cad"){
        system("cls");
        cout << "it's "<<question2*66.875 << " bdt from " <<question2<<" canadian dollar"<< endl;
    }else if(question=="jpy"){
        system("cls");
        cout << "it's "<<question2*0.776 << " bdt from " <<question2<<" japaneese yen"<< endl;
    }else if(question=="rub"){
        system("cls");
        cout << "it's "<<question2*1.171 << " bdt from " <<question2<<" Russian Rouble"<< endl;
    }else if(question=="chf"){
        system("cls");
        cout << "it's "<<question2*85.334 << " bdt from " <<question2<<" Swiss Franc"<< endl;
    }else if(question=="zar"){
        system("cls");
        cout << "it's "<<question2*5.809 << " bdt from " <<question2<<" South African Rand"<< endl;
    }}

void helloworld2(){
    string question;
    cout<<"name of the currency: ";
    cin>>question;
    int question2;
    cout << "enter the number of currency amount convert from bdt: ";
    cin >> question2;
    if(question=="usd"){
        system("cls");
        cout << "it's "<<question2/85.334 << " usd from " <<question2<<" bdt" << endl;
    }else if(question=="pound"){
        system("cls");
        cout << "it's "<<question2/117.253  << " pounds from " <<question2<<" bdt"<< endl;
    }else if(question=="euro"){
        system("cls");
        cout << "it's "<<question2/100.062 << " euro from " <<question2<<" bdt"<<endl;
    }else if(question=="aud"){
        system("cls");
        cout << "it's "<<question2/62.004  << " australian dollars from " <<question2<<"bdt"<< endl;
    }else if(question=="nzd"){
        system("cls");
        cout << "it's "<<question2/60.067  << " newzealand dollar from " <<question2<<"bdt"<< endl;
    }else if(question=="cad"){
        system("cls");
        cout << "it's "<<question2/66.875 << " canadian dollar from " <<question2<<"bdt"<< endl;
    }else if(question=="jpy"){
        system("cls");
        cout << "it's "<<question2/0.776 << " japaneese yen from " <<question2<<"bdt"<< endl;
    }else if(question=="rub"){
        system("cls");
        cout << "it's "<<question2/1.171 << " Russian Rouble from " <<question2<<"bdt"<< endl;
    }else if(question=="chf"){
        system("cls");
        cout << "it's "<<question2/85.334 << " Swiss Franc from " <<question2<<"bdt"<< endl;
    }else if(question=="zar"){
        system("cls");
        cout << "it's "<<question2/5.809 << " South African Rand from " <<question2<<"bdt"<< endl;
    }}


int main()
{   while(true){
    string question3;
    cout<<"type 1 for converting key currencys to bdt and press 2 to convert key currencys from bdt:";
    cin>>question3;
    if(question3=="1"){
        helloworld();
    }else if(question3=="2"){
        helloworld2();
    }

}

    return 0;
}
