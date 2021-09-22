#include <iostream>
#include <cmath>
#include  <bits/stdc++.h>
#include <ctime>
#include <string>
using namespace std;





int main()
{

    while(true){
    string cond;
    cout << "do want to run this?: ";
    cin >> cond;
    if(cond=="yes"||'y'){
        system("cls");

        string color;
        cout << "name a color: ";
        cin >> color;

        string pronoun;
        cout << "name a pronoun: ";
        cin >> pronoun;

        string celeb;
        cout << "enter a celebrity's name: ";
        cin >> celeb;

        cout <<"\n\n"<< endl;
        cout << "roses are "<< color<< endl;
        cout << pronoun << " are blue" <<endl;
        cout << "i love " << celeb<< endl;
        cout << "and so do you"<< endl;
    }else if(cond=="no"||'n'){
        break;
    }

return 0;
}}
