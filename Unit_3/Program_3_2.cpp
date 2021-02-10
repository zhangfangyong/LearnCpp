/**
 * function: BMI calculation.
 * data: 2021/2/7
 * author: zfy
 */

#include <iostream>
#include <cmath>
using namespace std;

const int FOOT_TO_INCH = 12;
const float POUND_TO_KG = 2.2;
const float INCH_TO_METER = 0.0254;

int main(){
    int foot,inch;
    float pound,kg,meter;
    float bodyMassIndex;

    cout<<"Please enter your height(foot and inch):";
    cin>>foot>>inch;
    cout<<"Please enter your weight in pounds:";
    cin>>pound;
    inch = foot * FOOT_TO_INCH + inch;
    meter = inch * INCH_TO_METER;
    kg = pound / POUND_TO_KG;
    bodyMassIndex = kg / sqrt(meter);
    cout<<"Your height is "<<inch<<" inches."<<endl;
    cout<<"Your BMI is "<<bodyMassIndex<<".";
    return 0;
}