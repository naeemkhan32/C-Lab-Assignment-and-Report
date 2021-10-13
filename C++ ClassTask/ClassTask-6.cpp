#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arra[100],n, key,loc=-1,p[100];
    cout<<"Enter a number ";
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    cout<<"enter a searching value key ";
    scanf("%d",&key);
    int i=0,cnt=0;
    while(i<n){
        if(key == arra[i]){
            loc=i;
            p[cnt++]=loc;
        }
        i++;
    }


    if(loc ==-1)
        printf("Item not found");
    else{
        for(int i=0;i<cnt;i++)
            printf("item fount at position : %d\n",p[i]);
    }


    return 0;
}

