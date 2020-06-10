#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(int capacity, vector<double> weights, vector<double> values) {

    double value = 0.0;
    int n = weights.size();
    vector<int> ar(n,0);

/*
  for (int i = 0; i < n; i++) {
    std::cout<<values[i] <<" "<< weights[i]<< "\n";
  }*/
      for(int i=0;i<n ;i++)
      {

            if(capacity == 0)
            {   //  std::cout<< value;
                return value;
            }

         int m = 0;
         double viwi = 0.00;
         double viwi_max =0.00;
    /*3 50
60 20
100 50
120 30*/

            for(int j=0;j<n;j++)
                {
                        viwi = values[j]/weights[j];
                        if(viwi > viwi_max)
                        {
                                viwi_max = viwi;
            //std::cout<< viwi_max << " ";
                                m=j;
      //      std::cout<< m << " ";

                        }

                }

      //          std::cout<< "HELLO ";
     //   std::cout<< m << " ";
                double a ;
                    if(capacity < weights[m]){ a = capacity;}
                    else {a = weights[m];}
                //std::cout<< a << " ";
                value = value + a*(viwi_max);
        //        std::cout<< value << " ";
                //weights[m] = weights[m] -a;
                values[m] =0;
                //std::cout<< weights[m] << " ";
                capacity = capacity -a;
               // std::cout<< "HELLO ";
        //ar[m] = ar[m] + a;

      }
return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
