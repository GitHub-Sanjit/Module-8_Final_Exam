#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        string s;
        int id;
};

int main()
{
    // Write your code here
    int n;
    cin >> n;
    Student x[n];
    for (int i = 0; i < n;i++){
        cin >>x[i].nm>>x[i].cls>> x[i].s >> x[i].id;
    }
    for (int i = 0; i < n/2;i++){
        int temp = x[i].id;
        x[i].id = x[n - 1 - i].id;
        x[n - 1 - i].id = temp;
        
    }
    for (int i = 0; i < n;i++){
        cout << x[i].nm<<" "<<x[i].cls << " " << x[i].s << " " << x[i].id<<endl;
    }

    return 0;
}