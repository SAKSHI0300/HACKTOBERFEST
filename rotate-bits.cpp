#include<iostream>
 
using namespace std;
#define INT_BITS 32
class codinggeek
{
     
/*Function to left rotate n by d bits*/
public:
int leftRotate(int n, unsigned int d)
{
     
    return (n << d)|(n >> (INT_BITS - d));
}
 
/*Function to right rotate n by d bits*/
int rightRotate(int n, unsigned int d)
{
    return (n >> d)|(n << (INT_BITS - d));
}
};
 
/* Driver code*/
int main()
{
    codinggeek g;
    int n = 16;
    int d = 2;
    cout << "Left Rotation of " << n <<
            " by " << d << " is ";
    cout << g.leftRotate(n, d);
    cout << "\nRight Rotation of " << n <<
            " by " << d << " is ";
    cout << g.rightRotate(n, d);
    getchar();
}
