#include <iostream>
using namespace std;
using range = pair <int, int>;
struct triple{
    range x;
    int beauty;
}
bool is_ok (range a, range b, range c, range d, range e)
{
    if (!(a.first<b.first and b.first<a.second and a.second<b.second)) return false;
    if (!(d.first<e.first and e.first<d.second and d.second<e.second)) return false;
    if (!(c.first<b.second and b.second<d.first and d.first<c.second)) return false;
    return true;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        vector<triple> ranges;
        while(m--){
            triple input;
            cin >> input.x.first >> input.x.second >> input.beauty;

        }
        sort(ranges.begin(),ranges.end(), [](triple left,triple right){
            return left.beauty > right.beauty;
        });
        
    }
}