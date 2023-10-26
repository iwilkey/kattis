#include <iostream>
using namespace std;

int main() {

  int lights, distance, waitTime = 0;
  cin >> lights >> distance;
  for(int i = 0; i < lights; i++) {
    static int dist, r, g;
    cin >> dist >> r >> g;
    int local = (dist + waitTime) % (r + g);
    if(local < r)
      waitTime += (r - local);
  }

  cout << distance + waitTime << endl;

  return 0;
}
