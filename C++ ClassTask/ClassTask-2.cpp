
#include<iostream>
using namespace std;

int sum(int, int); //function prototype
int mul(int, int); // function prototype


int main() // driver function
{

    int x,y;
    scanf("%d %d",&x,&y);
    int ret1= sum(x,y);
    int ret2 = mul(x,y);
    printf("Sum is : %d\n",ret1);
    printf("Multiplication is : %d\n",ret2);

    return 0;
}

int sum(int x, int y) //function definition
{
    int result= x+y;
    return result;
}


int mul(int x, int y)
{
    int result= x*y;
    return result;

}





