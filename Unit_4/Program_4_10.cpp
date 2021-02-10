/**
 * function: practise array
 * data: 2021/2/8
 * author: zfy
 */

#include <iostream>
#include <array>
using namespace std;

int main(){
    array<float, 3> grade{};
    cout<<"Please enter three numbers."<<endl;
    cin>>grade[0]>>grade[1]>>grade[2];
    cout<<grade.size()<<endl;
    cout<<(grade[0] + grade[1] + grade[2])/3;
}