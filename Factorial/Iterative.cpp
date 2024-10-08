#include<iostream>
int factorical(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}
int main(){
    std::cout<<"Factorial of number 10: "<<factorical(10);
    return 0;
}