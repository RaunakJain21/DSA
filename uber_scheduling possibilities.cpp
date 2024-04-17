// incomplete
// possible ways for pickup and drop where number of passengers are given 6 for 2 90 for 3 approx 
#include <iostream>
using namespace std;
int recurssive(int n)
{
    // if(n==1)
    // return 1;
    if(n==2)
    return 6;
    int ans=recurssive(n-1)*((2*n*n)+n+1);
    return ans;
}
int main()
{
    std::cout<<recurssive(3);

    return 0;
}