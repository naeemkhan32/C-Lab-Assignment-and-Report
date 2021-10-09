#include<bits/stdc++.h>
using namespace std;

void LinerSearch(int A[]);

int main()
{
    int arr[10],i;
    cout<<"Enter a number ";
    for(i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }

    LinerSearch(arr);

    return 0;
}

void LinerSearch(int A[])
{

    int data,flag=0,i;
    cout<<"Enter a searching data ";
    scanf("%d",&data);

    for(i=0; i<10; i++){
            if(A[i] == data){

                //printf("data is fount\n");
                flag = 1;
                break;
            }
    }

    if(flag == 0)//1
       printf("data is not fount\n");


     else
        printf("data is fount\n");


}



