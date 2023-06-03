#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string nm;
        int cls;
        string s;
        int id;
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
            cin >>x[i].nm>>x[i].cls>> x[i].s >> x[i].id >> x[i].math_marks >> x[i].eng_marks;
        }
        for (int i = 0; i < n - 1;i++){
            for (int j = i + 1; j < n;j++){
                if((x[i].math_marks+x[i].eng_marks) < (x[j].math_marks+x[j].eng_marks)){
                    swap(x[i], x[j]);
                }
                if((x[i].math_marks+x[i].eng_marks) == (x[j].math_marks+x[j].eng_marks)){
                    if(x[i].id>x[j].id){
                    swap(x[i], x[j]);
                    }

                }
            }
        }
        for (int i = 0; i < n;i++){
            cout << x[i].nm<<" "<<x[i].cls << " " << x[i].s << " " << x[i].id << " " << x[i].math_marks << " " << x[i].eng_marks << endl;
        }

            return 0;
}