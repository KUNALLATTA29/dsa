#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
    cin >> t;
    while (t--) {
        int t_sch, stu, pass;
        cin >> t_sch >> stu >> pass;
        int total_stu = t_sch * stu;
        double per = (static_cast<double>(pass) / total_stu) * 100;
        if (per > 50) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
