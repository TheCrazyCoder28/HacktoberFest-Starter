#include <iostream>

/* lucky_num is a function that will give if a number is lucky or not.
The question was taken in geeksforgeeks article https://www.geeksforgeeks.org/lucky-numbers/.
For More information visit this website */


int lucky_num(int n){
    for (int i = 2; i <= n; i++){
        if(n % i == 0) return false;

        int numbers_removed = n / i;
        n = n - numbers_removed; 
    }
    return true;
}
int main(){
    /* This will print all the luck numbers between 1 and 50 */
    for (int i = 1; i <= 50; i++){
        if (lucky_num(i))
            std::cout<<"R: "<<i<<"\n";
    }
    
    return 0;
}
