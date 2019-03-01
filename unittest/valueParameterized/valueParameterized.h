#include<iostream>
using namespace std;

template<class T>
void printValue(T value)
{
    cout << value << endl;
}
template<class P, class Q>
void printValues(P value, Q value2)
{
    cout << value << " " << value2 << endl;
}
