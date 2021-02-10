/**
 * function: Enter a distance in light-year, and then convert it into astronomical-unit with a function
 * data: 2021/2/6
 * author: zfy
 */

#include <iostream>
using namespace std;

double LytoAu(float lightYear){
    double astronomicalUnit;
    astronomicalUnit = lightYear * 63240;
    return astronomicalUnit;
}

int main(){
    float lightYear;
    double astronomicalUnit;
    cout<<"Enter a number of light years:";
    cin>>lightYear;
    astronomicalUnit = LytoAu(lightYear);
    cout<<lightYear<<" light years = "<<astronomicalUnit<<" astronomical units.";
    return 0;

}


