#include<iostream>
#include<string>
using namespace std;
void inverter(int& input1){
    string num = to_string(input1);
    reverse(num.begin(),num.end());
    input1 = stoi(num);
}
int main(){
    int input1;
    cout<<"Enter the number to be reversed: ";
    cin>>input1;
    cout<<endl;
    inverter(input1);
    cout<<"Number after reversing"<<": ";
    cout<<input1<<endl;
    return 0;
}