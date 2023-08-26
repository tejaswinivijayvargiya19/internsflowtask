//temperature convertor 
#include <iostream>
using namespace std;
double CtoK(double temp);
double CtoF(double temp);
double KtoF(double temp);
int main(){
    int n;
    double temp , newtemp; // temp = temperature given by user , newtemp = converted temperature
    cout << "1. convert celcius to kelvin" << endl;
    cout << "2. convert celcius to fahrenheit" << endl;
    cout << "3. convert kelvin to fahrenheit" << endl;
    cout << " ENTER 1/2/3 AS YOUR WISH" << endl;
    cin >> n;
    switch (n)
    {
    case 1 : 
    cout <<  " enter the temperature in celcius : ";
    cin >> temp;
    newtemp = CtoK(temp);
    cout << " the temperture in kelvin is : " << newtemp << "K" << endl;
    break;
    case 2 : 
    cout <<  " enter the temperature in celcius : ";
    cin >> temp;
    newtemp = CtoF(temp);
    cout << "the temperature in fahrenheit is : " << newtemp << "F" << endl;
    break;
    case 3 : 
    cout <<  " enter the temperature in kelvin : ";
    cin >> temp;
    newtemp = CtoK(temp);
    cout << "the temperature in fahrenheit is : " << newtemp << "K" << endl;
    break;
    default :
    cout << "invalid option , select the valid option!"<< endl;
    }
    return 0;
}
double CtoK(double celcius){
    return celcius + 273.15;
}
double CtoF(double celcius){
    return (celcius*9.0/50) +32.0;
}
double KtoF(double kelvin){
    return (kelvin - 273.15)*9.0/5.0 + 32.0;
}
    