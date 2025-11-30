#include<iostream>
using namespace std;
int main(){
    int n = 4;
    char ch = 'A';
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<ch<<" ";
            ch++;// we can use ch = ch + 1; as well or ch++ both do the same work
        }
        cout<<endl;
    }

    // the main thing to note here is that char data type can also be incremented or decremented like integers
    // and the another thing is that when we initialize char inside the loop it will reset to 'A' every time
    // so to avoid that we initialize it outside the loop
    // if i want to print the pattern like below
    // A B C D
    // A B C D
    //then i can do that by initializing char inside the loop
    return 0;
}