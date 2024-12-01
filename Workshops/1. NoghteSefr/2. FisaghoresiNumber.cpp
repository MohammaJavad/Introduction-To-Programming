#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int one, two, three;
  int max;
  cin>>one>>two>>three;
  if (one>two){
    max=one;
  } else {
    max=two;
  }
  if (max<three){
    max=three;
  }

  if (max==one and pow(one, 2)==pow(two, 2)+pow(three,2))
  {
    cout << "YES";
  } else if (max==two and pow(two, 2)==pow(one, 2)+pow(three,2))
  {
    cout << "YES";
  } else if (max==three and pow(three, 2)==pow(two, 2)+pow(one,2))
  {
    cout << "YES";
  } else cout << "No";

    
    

    


}