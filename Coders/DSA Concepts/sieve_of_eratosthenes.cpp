#include<iostream>
#include<vector>
using namespace std;

vector<int> sieveOfEratosthenes(int n) {
    vector<bool> mark;
    vector<int> primes;
    mark.resize(n + 1, true);
    mark[0] = mark[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (mark[i] == true) {
            for (int j = i * i, j <= n; j += i) {
                mark[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (mark[i] == true) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    int n = 25;
    vector<int> primes = sieveOfEratosthenes(n);
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << " ";
    }
    cout<< endl;
    return 0;
}
