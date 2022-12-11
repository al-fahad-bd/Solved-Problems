#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int spent_time, avg_speed;
    cin >> spent_time >> avg_speed;
    double distance = spent_time * avg_speed;
    double liters = distance/12;
    cout << fixed << setprecision(3) << liters << endl;
    return 0;
}
