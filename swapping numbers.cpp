#include <iostream>

using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter value for a and b"<<endl;
    cin>>a>>b;
    cout<<"Before swapping"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;

    // a temp variable is used to swap two numbers
    temp = a;
    a = b;
    b = temp;

    cout<<"\nAfter swapping using third variable"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;

    // Swap without using any third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"\nAfter swapping without using any third variable"<<endl;
    cout<<"a = "<<a<<"\nb = "<<b<<endl;

    return 0;
}
