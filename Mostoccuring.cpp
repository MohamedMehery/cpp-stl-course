#include <iostream>

using namespace std;

template<class T>
int mostoccuring(T* arr,int size)
{
    int mostoccure = 0;
    int oldmax = 0;
    int max = 0;
    for(int i =0 ; i < size-1 ; i++)
    {
        if(arr[i] == arr[i+1])
        {
            max++;
            if(oldmax < max)
            {
                oldmax = max;
                mostoccure=arr[i];
            }
        }
        else{max = 0;}
    }
    return mostoccure;
}

int main()
{
    int arr[12] = {1, 1, 1, 2, 2, 3, 3, 3, 14, 14, 14, 14};
    cout <<"\t" << mostoccuring<int>(arr,12)<<endl;
    return 0;
}
