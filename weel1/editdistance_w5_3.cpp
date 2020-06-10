#include <iostream>
#include <string>
#include <vector>


using std::string;
using std::vector;

int edit_distance(const string &str1, const string &str2) {
  //write your code here
  int cost=0;

    int n = str1.size()+1;
    int m= str2.size()+1;

    vector< vector<int> > a(n, vector<int> (m,0));

int ncounter =0;
for(int i=0;i<n;i++)
{
    a[i][0] = ncounter;
    ncounter++;
}
int mcounter=0;
for(int j=0;j<m;j++)
{
    a[0][j] = mcounter;
    mcounter++;
}



  for(int i=1;i < n;i++ )
  {
    for(int j=1;j < m;j++)
    {
            if(str1[i-1] == str2[j-1])
            {  //    std::cout<< str1[i-1] << str2[j-1]<<'\n';
                a[i][j] = a[i-1][j-1];
            }
            else
            {
                if((a[i-1][j-1] <= a[i-1][j])&&(a[i-1][j-1] <= a[i][j-1]))
                {
                    a[i][j] = a[i-1][j-1] + 1;
                }
                else if((a[i-1][j] <= a[i-1][j-1])&&(a[i-1][j] <= a[i][j-1]))
                {
                    a[i][j] = a[i-1][j] + 1;
                }
                else
                {
                    a[i][j] = a[i][j-1] + 1;
                }

            }
    }
  }
/*
std::cout<<"h";

  for(int i=0;i < n;i++ )
  {
    for(int j=0;j < m;j++)
    {
        std::cout<<a[i][j]<<"   ";
    }
    std::cout<<'\n';
  }
std::cout<<"h";
*/

cost = a[n-1][m-1];

return cost;
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}
