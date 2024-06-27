/*
->vectors are known as dynamic array.
->vectors provide bound checking but there is no bound checking in array.
->declaration of vector "vector<object_type> vector_name(size);" size is optional. 
 ex- vector<int> numbers; 
     vector<char> vowels(5);
->vector creates a new vector when it double it's size and dispose the previous vector.
->numb.begin() and numb.end() these are iterator functions.
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int value;
    //Declaration
    vector<int> numbers;
    vector<int> number(10,5); // (number of arguements, value)
    vector<int> num(10);
    vector<int> numb={2,4,5,67,8,9};
    vector<int> n(numb.begin(),numb.end());// here we initialize numb vector to n vector


    //Insertion using iterator functions.
    fill(num.begin(),num.end(),5); //begin()
    for(int i=0 ; i<numb.size() ; i++)
    {
        cout<<numb[i]<<endl;
    }

    //Insertion using for loop.
    for(int i=0 ; i<4 ; i++)
    {
        cout<<"enter value: ";
        cin>>value;
        numbers.push_back(value);
    }

    //Insertion
     numbers.push_back(3);
     numbers.push_back(23);
     numbers.push_back(43);
     numbers.push_back(40);
     numbers.push_back(38);
     numbers.push_back(33);

    //Getting size and capacity of a vector.
    cout<<"size of numbers:"<<numbers.size();
    cout<<"\nCapacity of numbers:"<<numbers.capacity(); //it double the size of vector when it's full.

    //Getting an element by index number.
    cout<<numbers[6];

    return 0;
}