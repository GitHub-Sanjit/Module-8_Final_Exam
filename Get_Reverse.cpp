#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        string s;
        int math_marks;
        int eng_marks;
};

int main()
{
    // Write your code here
        int n;
        cin >> n;
        Student x[n];
        for (int i = 0; i < n;i++){
            cin >>x[i].nm>>x[i].cls>> x[i].s>> x[i].math_marks >> x[i].eng_marks;
        }
        for (int i = n-1; i >=0; i--){
            cout << x[i].nm << " " << x[i].cls << " " << x[i].s << " " << x[i].math_marks << " " << x[i].eng_marks << endl;
        }
        return 0;
}