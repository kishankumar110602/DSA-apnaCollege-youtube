#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;


    // code for the simple number pattern
    //123
    //123
    //123

    // for(int i=1;i<n;i++){
    //     for(int j=1;j<n;j++){
    //         std::cout<<j;
    //     }
    //     std::cout<<std::endl;
    // }

    
    //code using print the number pattern like below
    // 1 2 3 4
    // 5 6 7 8
    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num= num+1;
        }
        cout<<endl;
    }
    return 0;
}