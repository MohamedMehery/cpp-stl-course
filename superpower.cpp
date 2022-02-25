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
double Logn(unsigned int n,
                  unsigned int r)
{
    return (log(n) / log(r));

}

/** this code check if input z can be p to the power q
 * **/
bool superpower(int z)
{   /* function complixity = O(log(n)) */
    for(int j = 2 ; j < z ; j++)
    {
        for(int i = z ; i > j ; i--)    //iterate on z->j
        {
            if( ( ceil( Logn(i , j) ) == floor( Logn(i , j) ) ) && 
            ( z==(pow(j , Logn(i , j)) ) ) ) //if logn return int 
            {
                cout << "\tz= " << pow(j , Logn(i , j)) << "\tq = " <<  j << "\tP = " << Logn(i , j) << endl;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    cout << "\t" << superpower(27) << endl;
    return 0;
}