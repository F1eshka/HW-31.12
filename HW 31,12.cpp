#include <iostream>
#include <windows.h>
using namespace std;

class Counter {
    int now = 0;
    int min = 0;
    int max = 9999;
    int plus = 1;

public:
    void SetNow(int n) {
        now = n;
    }
    int GetNow() {
        return now;
    }
    void SetMin(int mi) {
        min = mi;
    }
    int GetMin() {
        return min;
    }
    void SetMax(int ma) {
        max = ma;
    }
    int GetMax() {
        return max;
    }
    void SetPlus(int p) {
        plus = p;
    }
    int GetPlus() {
        return plus;
    }

    void Function()
    {
        while (now <= max) {

            if (now == max) {
                now = min;
                Sleep(5000);
            }
            now += plus;
            cout << now << "\n";
        }
    }
};

int main() {
    Counter c;
    c.Function();
}