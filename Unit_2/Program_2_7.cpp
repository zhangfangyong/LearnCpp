/**
 * function: Enter the number of hours and minutes,then according to the format(hours:minutes)
 * data: 2021/2/7
 * author: zfy
 */

#include <iostream>
using namespace std;

void TimeDisplay(int hour, int minute){
    cout<<"Time: "<<hour<<":"<<minute;
}
int main(){
    int hour,minute;
    cout<<"Enter the number of hours:";
    cin>>hour;
    while (hour > 24 or hour <= 0){
        cout<<"Out of the limit, please be greater than 0 and less than or equal to 24."<<endl;
        cout<<"Enter the number of hours:";
        cin>>hour;
    }
    cout<<"Enter the number of minutes:";
    cin>>minute;
    while (minute > 59 or minute < 0){
        cout<<"Out of limit, please be more than or equal to 0 less than 59."<<endl;
        cout<<"Enter the number of minutes:";
        cin>>minute;
    }
    TimeDisplay(hour,minute);
    return 0;
}

