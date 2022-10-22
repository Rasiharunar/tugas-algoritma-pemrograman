#include <iostream>

using namespace std;

int main(){
 float celcius, fahrenheit, kelvin, reamur;
 float fhrnToCel, klvToCel, rmrToCel;

 cout << "input nilai suhu dalam fahrenheit : "<<endl;   
 cin >> fahrenheit;
 fhrnToCel = (5.0/9.0) * (fahrenheit -32);
 cout << "fahrenheit ke celcius : " <<fhrnToCel<<endl;

 cout << "input nilai suhu dalam kelvin : "<<endl;   
 cin >> kelvin;
 klvToCel = kelvin - 273.0;
 cout << "kelvin ke celcius : " <<klvToCel<<endl;

 cout << "input nilai suhu dalam reamur : "<<endl;   
 cin >> reamur;
 rmrToCel = (5.0/4.0) * reamur;
 cout << "reamur ke celcius : " <<rmrToCel<<endl;

}