#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int linear_search(int *a, int n,int item);

int main()
{
    int a[8] = {-11, -2, 4, 12, 18, 25, 37, 79};
    int value;
    cout <<"Enter a value: ";
    cin >> value;
    int location = linear_search(a, 8, value);
    if(location == -1){
        cout << value << " not found " << endl;
    }
    else{
        cout << value << " foumd at position "  << location << endl;
    }

    return 0;
}


int linear_search(int *a, int n,int item)
{
    for(int i=0; i<n; i++){
        if(a[i] == item) return i;

    }

    return -1;
}




