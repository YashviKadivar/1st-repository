#include<iostream>
using namespace std;

int main()
{
    int a[10],i,sum=0;

        for(i=0;i<=9;i++)
        {
          cout<<"enter a value->";
          cin>>a[i];
          cout<<endl;
        }

        for(i=0;i<=9;i++)
        {
            sum=sum+a[i];
        }

       cout<<"Ans = "<<sum;

    return 0;
}
