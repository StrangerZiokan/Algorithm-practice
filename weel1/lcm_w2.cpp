#include <iostream>

long long euclid_fast(long long a, long long b) {

  if(b == 0){
        return a;
  }

  long long a1 = a%b;

  return euclid_fast(b,a1);

}

long long lcm_fast(long long a, long long b) {

    long long i = euclid_fast(a,b);

    long long lcm = (a*b)/i;

    return lcm;
  }

int main() {
  long long a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
