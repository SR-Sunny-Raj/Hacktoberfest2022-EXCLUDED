// Implementing Tower Of Hanoi with three disks A, B and C using stack
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char frod, char trod, char arod)
{
    // frod -> from rod, trod -> to rod, arod -> auxillary rod
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, frod, arod, trod);
    cout << "Move disk " << n << "from rod " << frod << "to rod " << trod << endl;
    towerOfHanoi(n - 1, arod, trod, frod);
}

int main()
{
    int N = 3;
    // N = 3 for 3 disks A, B and C
    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}