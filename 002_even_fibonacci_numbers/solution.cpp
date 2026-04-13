#include <iostream>
#include <chrono>   // added for timer not relevant

int fibonacci(int num);

int main(){
    using namespace std::chrono;   // added for timer

    auto start = high_resolution_clock::now();   // start timer

    int num = 4000000;
    int result = 0;
    std::cout << "Fibonacci series: 0 ";

    int  i = 0;
    int out = 0;
    while (out <= num){
        int x = (out == 0)?fibonacci(i): out;
        if(x%2 == 0){
            result += x;
        }
        std::cout << "\t" << x;
        i++;
        out = fibonacci(i);
    }

    std:: cout << "The result is: " << result;


    // timer code not relevant to question
    auto stop = high_resolution_clock::now();   // stop timer
    auto duration = duration_cast<microseconds>(stop - start);

    std::cout << "\nTime: " << duration.count() << " microseconds";

    return 0;
}


// unoptimized version:: took 172788 microsec
// int fibonacci(int num){
//     if(num == 0) {
//         return 0;
//     }
//     if(num == 1 || num == 2){
//         return 1;
//     }
//     int val = fibonacci(num-2)+fibonacci(num-1);
//     return val;
// }

// here, the redundancy arises due to this
// fibonacci(5)
//  → fibonacci(4) + fibonacci(3)
//      → fibonacci(3) + fibonacci(2)
//          → fibonacci(2) + fibonacci(1)
// clearly, fibonacci(3) is called multiple times. Increases compute time. noticable in large number calls




// optimized version, reducing recalculation by using array for cacheing
// Time: 26341 microseconds
// efficiency = 6.56x (Approx)
int fibonacci(int num){
    static int memo[10000] = {0};
    if(num == 0) {
        return 0;
    }
    if(num == 1 || num == 2){
        return 1;
    }
    if(memo[num] != 0)   // already computed
        return memo[num];

    memo[num] = fibonacci(num-1) + fibonacci(num-2);
    return memo[num];
}