#include<iostream>
using namespace std;

//Using C Pointers
// int swap(int *x, int *y){
//     int t;
//     t= *y;
//     *y = *x;
//     *x = t;
//     return 0;
// }

//Using C++ Reference Variable
int swap(int &x, int &y){
    int t;
    t= y;
    y = x;
    x = t;
    return 0;
}
int main(){
    int a = 5, b=7;
    cout<<"Before swap: a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"After swap: a = "<<a<<" b = "<<b<<endl;
    return 0;
};