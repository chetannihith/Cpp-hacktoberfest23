#include<iostream>
int factorical(int num){
    int result = 1;
    if(num >1){
        return num * factorical(num - 1);
    }
    else{
        return 1;
    }
}
int main(){
    std::cout<<"Factorial of number 10: "<<factorical(10);
    return 0;
}