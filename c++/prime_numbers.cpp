/*
This Program will help you For checking prime number and generating prime numbers

Author:NIKHIL RAJ PANDEY
Current Age:14 Years
*/

#include <iostream>
#include <cmath>
#define quit_letter '!'

bool *SieveofEratosthenes(int user_input_num_){
    static bool * result_ = new bool[user_input_num_];

    if(user_input_num_<=0){return result_;}

    // The list start from 1 and end to sqrt(user_input_num_)
    result_[0] = 1; // All 1 marked are composite or 1 and all 0 marked are prime user_input_nums

    for (int i = 1; i < sqrt(user_input_num_)+1; i++){
        if(result_[i-1] == 0){
            int square_of_i = i*i-1;
            // Squaring Because all the factor before i of i will be marked by other user_input_num previous then it
            while (square_of_i < user_input_num_){
                result_[square_of_i] = 1;
                square_of_i += i;
            }
        }
    }
    return result_;
}
bool isPrime(int user_input_num_){
    if(user_input_num_ <= 1){return false;}

    for (int i = 2; i < sqrt(user_input_num_)+1; i++){
        if (user_input_num_ % i == 0){return false;}
    }
    return true;
}

int main(){
    char option;
    int user_input_num;
    while (true){
        std::cout<<"For Quit write ! and enter"<<std::endl;
        std::cout<<"For checking prime number(c) and for generating prime(g): ";
        std::cin>>option;
        if(option == quit_letter){break;}
        else if(option == 'c'){
            std::cout<<"Your Number"<<std::endl;
            std::cin>>user_input_num;
            if (isPrime(user_input_num)){
                std::cout<<"Yes "<<user_input_num<<" is a Prime Number\n"<<std::endl;
            }
            else{
                std::cout<<"No "<<user_input_num<<" is not a Prime Number\n"<<std::endl;
            }
        }
        else if(option == 'g'){
            std::cout<<"From 1 to ";
            std::cin>>user_input_num;
            if(user_input_num<=1){std::cout<<"There are no prime numbers for them"<<std::endl;}
            else{
                std::cout<<"Prime Numbers till n are"<<std::endl;
                bool *prime_numbers_till_n = SieveofEratosthenes(user_input_num);
                std::cout<<"{";
                for (int i = 0; i < user_input_num; i++){
                    if(!prime_numbers_till_n[i]){ // Means not a composite number
                        std::cout<<i+1<<",";
                    }
                }
                std::cout<<"}\n\n";
            }
        }
    }
    std::cout<<"\n Thankyou For Using This program"<<std::endl;
    
    return 0;
}