#include <iostream>
#include <math.h>

using namespace std;
/*
unsigned int logn(unsigned int n ,unsigned int  r)
{
    return (n > r-1)  ? 1+logn((n / r) , r ) : 0;   
    //this line count the number if ones which means that n is divisable by r
}*/

/* we can use logarithmic rule mensioned in geekfor geeks */ 
unsigned int Logn(unsigned int n,
                  unsigned int r)
{
    return log(n) / log(r);

}
bool superpower(int z)
{   /* function complixity = O(log(n))  */
    for(int j = z ; j > 1 ; j++)
    {
        for(int i = z-1 ; i > 1 ; i--)
        {
            if( ceil( Logn(j , i)) == floor(Logn(j , i))) //if logn return int 
                return 1;
        }
    }
    return 0;
}

int main()
{
    cout << "\t" << superpower(9) << endl;
    return 0;
}