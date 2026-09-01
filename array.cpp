#include<iostream>
using namespace std;
int main()
{
    int*arr;
    int size;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"creating size";
    arr=new int[size];
    cout<<"enter values of array";
    for(int i=0,i<size,i++)
    {
        cin>>arr[i];

    }
    delet arr;
    cout<<"display arr";
    for(int"i=o,i<size,i++")
    {
        cout<<""<<arr[i];
    }
    return 0;
}