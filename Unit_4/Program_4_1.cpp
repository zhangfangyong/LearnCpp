/**
 * function: display by format
 * data: 2021/2/7
 * author: zfy
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName,lastName,name;
    char grade;
    int age;

    cout<<"What's your first name?";
    getline(cin,firstName);
    cout<<"What's your last name?";
    cin>>lastName;
    cout<<"What letter grade do you deserve?";
    cin>>grade;
    cout<<"What's your age?";
    cin>>age;
    name = lastName + "," + firstName;
    grade = grade + 1;
    cout<<"Name: "<<name<<endl;
    cout<<"Grade: "<<grade<<endl;
    cout<<"Age: "<<age;
}