#include <iostream>


int main(){
    int max_num = 988000;    // till which number of square we need to calculate
    long long i = 0;  //The actual numbers which we will square
    long long n = 0;  //the squared num
    long long result = 0;
    while(i < max_num){
        n = i*i*1LL;
        if(i%2==1){
            result+=n;
        }
        i++;
    }
    std::cout<<"the sum is: "<< result << std::endl;
}