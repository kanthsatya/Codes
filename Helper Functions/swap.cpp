#include<iostream>

using namespace std;

void swap(int &i, int &j){
    int temp = i;
    i = j;
    j = temp;
}

int main()
{
    int i=2,j=5;
    swap(i,j);
    cout<<"i = "<<i<<" j= "<<j;
    return 0;
}