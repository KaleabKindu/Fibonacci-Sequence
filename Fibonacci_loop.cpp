#include <iostream>
using namespace std;

int main()
{
    int num;
  cout<<"*******A Program That Computes nth Terms of The Fibonacci Sequence*******\n";
    cout<<"Enter The Number of Terms of The Fibonacci Series: ";
    cin>>num;
    cout<<"Fibonacci Series Up to "<<num<<"th terms: ";
    int t1,t2,t3;
    for(int i=1; i<=num;i++ )
    {
       if(i==1)
       {   t1=0;
           cout<<t1;
           continue;
       }
       else if(i==2)
       {   t2=1;
           cout<<","<<t2;
           continue;
       }
      else
       {
           t3=t1+t2;
           cout<<","<<t3;
           t1=t2;
           t2=t3;
       }
    }
    cout<<"\nThe "<<num<<"th Term of The Fibonacci Series is "<<t2;
    return 0;
}
