#include <iostream>

using namespace std;

int main()
{
    int fahrenheit ;
    for(float celsius=100;celsius!=fahrenheit;celsius-- ){
        fahrenheit=((9*celsius)/5)+32;
        cout<<fahrenheit<<endl;

        if(fahrenheit==celsius){
            cout<<"Degree "<<"("<<celsius<<")"<<" is The Same Temperature degree in both Celsius and Fahrenheit"<<endl;
            break;
        }
    }
    return 0;
}
