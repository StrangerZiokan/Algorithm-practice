#include <iostream>
#include <vector>

long long fiblastdigit(long long n) {
    if (n <= 1)
        return n;

    long long a[n];
    a[0] = 0;
    a[1] = 1;




    for(int i=2;i<=n; i++ ){

        a[i] = (a[i-1] + a[i-2])%10;
    }

    long long r = a[n];

    return r;
}


int main() {
    long long n;
    std::cin >> n;
    long long c = fiblastdigit(n);

    std::cout << c ;

    return 0;
    }
