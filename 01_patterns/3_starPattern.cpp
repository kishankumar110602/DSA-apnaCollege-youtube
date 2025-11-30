#include<iostream>
using namespace std;
int main(){
    int n=5;

    // this is the code for star pattern for stars in pyramid form
    // *
    // * *
    // * * *
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0; j<i+1 ; j++){
    //         std::cout<<"* ";
    //     }
    //     std::cout<<std::endl;
    // }



    // this is the code for star pattern for number in star form
    // 1
    // 2 2
    // 3 3 3
    for(int i =0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }

        cout<<endl;
    }

}