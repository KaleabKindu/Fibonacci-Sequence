#include <iostream>
using namespace std;

int fibn(int);
int main()
{
    int num;
    cout<<"********A Program That Computes n Terms of The Fibonacci Sequence Using Recursion******\n";
    cout<<"Enter The Number of Terms of The Fibonacci Series: ";
    cin>>num;
    cout<<"The "<<num<<"th term of the Fibonacci Series is "<<fibn(num);
    cout<<"\nThe Fibonacci Series up to the "<<num<<"th "<<"term is: ";
    for (int i=1; i<=num; i++)
    {
        cout<<fibn(i)<<" ";
    }
    return 0;
}
int fibn(int x)
{
    if (x==1){
      return 0;   }
    else if(x==2){
      return 1;   }
    else {
      return (fibn(x-1)+fibn(x-2));  }
}

