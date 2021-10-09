#include<bits/stdc++.h>
using namespace std;
int binary_search(int *a, int n, int item);
int main(){

    int a[] = {-11, -2, 4, 12, 18, 25, 37, 79};
    int value;
    cout << "Enter the value ";
    cin >> value;

    int location = binary_search(a, 8, value);
     if(location == -1){
        cout << value << " not found " << endl;
    }
    else{
        cout << value << " foumd at position "  << location << endl;
    }


    return 0;
}

int  binary_search(int *a, int n, int item)
{
    int lo = 0,hi = n-1,mid;
    while(lo<=hi){
        mid = (lo + hi)/2;
        if(item == a[mid]) return mid;
        else if(item > a[mid]) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}



