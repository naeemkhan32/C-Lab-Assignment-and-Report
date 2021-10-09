#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arra[100],key,n,positions[100],loc=-1;
    cout<<"Enter a number ";
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arra[i]);
    }

    printf("Enter the searching key value :");
    scanf("%d",&key);
    int i=0,cnt=0;

    while(i<n)
    {
        if(key == arra[i]){
            loc=i;  //i++
            positions[cnt++]=loc;
            //cnt++
        }
        i++;
    }

    if(loc ==-1)
        printf("Item not found");
    else{
       // for(int i=0;i<cnt;i++)
            printf("item fount at position : %d\n",positions[i]);
    }

    return 0;
}

