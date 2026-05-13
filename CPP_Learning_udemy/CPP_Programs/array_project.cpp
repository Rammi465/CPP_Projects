#include<iostream>
int main()
{
std::cout<<"Enter the size of the array: ";
int size;
std::cin>>size;

int arr[size];  

for(int i=0;i<size;i++)
{
    std::cout<<"Enter the element at index "<<i<<": ";
    std::cin>>arr[i];
}               


std::cout<<"The array is: ";
for(int i=0;i<size;i++)
{
    std::cout<<arr[i]<<" ";
}   









}