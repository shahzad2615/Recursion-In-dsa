//  print n to 1 using recursion

#include <iostream>
using namespace std;
void print_numbers(int i,int n){
    if(i<1){
        return;
    }
    //  cout<<i<<endl;
    print_numbers(i-1,n);
    cout<<i<<endl;
}

int main(){    
    int n=6;
   
    print_numbers(n,n);

    return 0;
}


// print 1 to n using backtracking 
#include <iostream>
using namespace std;
//  print 1 to n using backtracking
void numbers(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    numbers(i-1,sum+i);
  
}

int main()
{
  
   int n=5;
   numbers(n,0);

    return 0;
}

// sum of n natural number using function

#include<iostream>
using namespace std;
int  numbers(int n){
    if(n==0) return 0;
    return n+numbers(n-1);
}
int main(){
    int n=5;
   
    cout<<numbers(n);
    return 0;
   
}

// sum of n natural numbers parameterized way

#include <iostream>
using namespace std;
void numbers(int i,int sum){
    if(i<1){
    cout<<sum<<endl;
    return ;
    }
    numbers(i-1,sum+i);
}

int main()
{
   int n=3;
   numbers(3,0);

    return 0;
}
C:\Users\ADMIN\Desktop\C++online dsa program\recusion.cpp