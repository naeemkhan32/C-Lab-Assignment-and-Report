#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n);
int main()
{
    int a[5] = {64, 25, 12, 22, 11};

    cout << "Array befor sorting = ";
    for(int i=0; i<5; i++){
        cout << " " << a[i];
    }
    cout << endl;

    selection_sort(a, 5);
    cout <<" Array after sorting = ";
    for(int i=0; i<5; i++){
        cout <<" " << a[i];
    }

     cout << endl;

    return 0;
}

void selection_sort(int a[], int n)
{
    for(int i=0; i<n-1; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[min_idx])
                min_idx = j;
        }

        int t = a[i];
        a[i] = a[min_idx];
        a[min_idx] = t;
    }

}

