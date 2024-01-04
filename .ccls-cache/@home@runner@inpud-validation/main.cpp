#include <iostream>
#include <vector>

using namespace std;

int main() {
vector<double> prices {9.99, 12.99, 4.50, 0.99, 2.99, 6.25, 8.75};

  for (int i = 0; i < prices.size(); i++) {
    cout << prices[i] << endl;
  }
  
  return 0;
}
