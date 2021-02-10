/**
 * function: Enter a distance in long, and then convert it into yards (a long is equal to 220 yards)
 * data: 2021/2/6
 * author: zfy
 */

#include <iostream>
using namespace std;
int main(){
    long temp;
    cout<<"Please enter a distance in long:";
    cin>>temp;
    cout<<temp<<" long = "<<220*temp<<" yards";
    return 0;
}

