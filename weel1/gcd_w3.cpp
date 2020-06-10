#include <iostream>

int euclid_fast(int a, int b) {

  if(b == 0){
        return a;
  }

  int a1 = a%b;

  return euclid_fast(b,a1);

}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << euclid_fast(a, b) << std::endl;
  return 0;
}
