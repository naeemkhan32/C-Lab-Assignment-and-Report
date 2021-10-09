#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,temp;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    int A[n];

    printf("Enter array value : ");
    for(i=0; i<n; i++)
        scanf("%d",&A[i]);

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

            }
        }
    }

    printf("Sorted array is : ");
    for(i=0; i<n; i++)
        printf("%d ",A[i]);



    return 0;
}


