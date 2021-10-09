#include<bits/stdc++.h>
using namespace std;

void LinerSearch(int A[]);

int main()
{
    int arr[10],i;
    cout<<"Enter a number ";
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    LinerSearch(arr);

    return 0;
}

void LinerSearch(int A[])
{

    int data,flag=0,i,p[100],cnt=0;
    cout<<"Enter a searching data ";
    scanf("%d",&data);

    for(i=0; i<5; i++)
    {
        if(A[i] == data)
        {
            p[cnt++]=i;

            //printf("data is fount\n");
            flag = 1;


        }

    }

    if(flag == 0)//1
        printf("data is not found\n");


    else
        for(int i=0;i<cnt;i++)
            printf("data is found %d\n",p[i]);


}



