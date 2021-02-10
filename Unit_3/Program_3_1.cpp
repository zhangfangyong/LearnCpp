/**
 * function: Unit conversion, display by format.
 * data: 2021/2/7
 * author: zfy
 */

#include <iostream>
using namespace std;

const int CONVERSION_FACTOR = 12; // 1 foot = 12 inches

int main(){
    int height;
    int foot;
    int inch;
    cout<<"Please enter your height in inches:____\b\b\b\b";
    cin>>height;
    foot = height / CONVERSION_FACTOR;
    inch = height % CONVERSION_FACTOR;
    cout<<"Your height is "<<foot<<" feet and "<<inch<<" inches."<<endl;
    system("pause");
    return 0;
}