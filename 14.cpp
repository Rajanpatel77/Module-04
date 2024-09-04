#include <iostream>

using namespace std;

int main() {

    int *ptr;
    
    ptr = new int; //new operator address return value and store in ptr

    cout<<"Enter Number "<<endl;
    cin>>*ptr;

    cout<<"store at "<<ptr<<endl;
    

    delete ptr; 

    return 0;
}

