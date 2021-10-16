//Vector it is a dynamic array it can change its size. If vector is full it will double its size so new elements can be allocated.
//use in build library
//When you pass a vector from one function to another we use pass by value(sending copy of vector). If it pass by reference(then use &)
//Vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr={1,2,10,12,15};
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(19);
    cout<<arr.size()<<endl;
    cout<<"------------------------"<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    arr.pop_back();
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
