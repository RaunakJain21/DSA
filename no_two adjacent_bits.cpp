// no two adjacent bits should be 1
// how many combinations possible if number of bits n is given
#include <iostream>
using namespace std;
int main()
{
   int c0=1,c1=1,newc0,newc1,i=2;
    while(i<=n)
    {
        newc0=c0+c1;
        newc1=c0;
        i++;
        c0=newc0;
        c1=newc1;
    }
    cout<<newc0+newc1;

    return 0;
}