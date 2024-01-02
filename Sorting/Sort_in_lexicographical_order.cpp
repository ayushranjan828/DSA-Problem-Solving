/*
    Given an array of names of the fruits; you are supposed to sort it in lexicographical order using selection sort.

    INPUT:- {"papaya","lemon","watermelon","apple","mango","kiwi"}
    OUTPUT:- {"apple", "kiwi", "lemon", "mango", "papaya", "watermelon"}
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char fruit[][50] = {"papaya","lemon","watermelon","apple","mango","kiwi"};

    int size = sizeof(fruit)/sizeof(fruit[0]);

    cout<<"Unsorted Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<fruit[i]<<" ";
    }
    cout<<endl;

   for(int i=0; i<size-1; i++)
    {
        int min_index = i;
        for(int j=i+1; j<size; j++)
        {
            if(strcmp(fruit[min_index],fruit[j]) > 0)
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            swap(fruit[i],fruit[min_index]); 
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<fruit[i]<<" ";
    }
    cout<<endl;

    return 0;
}