#include <iostream>
#include <math.h>

using namespace std;

bool superpower(int z)
{
    for(int j = z ; j > 1 ; j++)
    {
        for(int i = z-1 ; i > 1 ; i--)
        {
            if( ceil( logn(j , i)) == floor(logn(j , i)))
                return 1;;
        }
    }
    return 0;
}

int main()
{

    return 0;
}