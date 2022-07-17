#include <iostream>

using namespace std;

// the program to take input from the user and display inputted value
int main()
{
    int a;
    cout<<"Enter a value:\t";
    cin>>a;
    cout<<"Entered value is "<<a<<endl;

    // we can also take multiple inputs from the user using single cin statement

    string name;
    int age;
    cout<<"Enter your name and age"<<endl;
    cin>>name>>age;
    cout<<"Name:\t"<<name<<endl;
    cout<<"Age:\t"<<age<<endl;
    return 0;
}
