#include <iostream>
#include <vector>
using namespace std;

class Student {
    public:
    vector<vector<int>> scores;

    void input(vector<vector<int>> &scores) {
        int n;
        cin >> n;
        for (int i = 0; i != n; i++) {
            vector<int> student_grades; 
            for (int j = 0; j != 5; j++) {
                int grade;
                cin >> grade;
                student_grades.push_back(grade);
            }
            scores.push_back(student_grades); 
        }
    }

    int calculateTotalScore(vector<vector<int>> &scores){
        int grade_per_student, count;
        vector<int> sum_of_grades;
        count = 0;
        for (vector<int> i : scores){
            int sum;
            grade_per_student = i[0] + i[1] + i[2] + i[3] + i[4];
            sum_of_grades.push_back(grade_per_student);
        }
        for (int i = 0; i != sum_of_grades.size(); i++){
            if (sum_of_grades[0] < sum_of_grades[i]){
                count += 1; 
            }
        }
        return count;
        }
    };

int main() {
    vector<vector<int>> vec;
    Student obj;
    int number;
    obj.input(vec);
    number = obj.calculateTotalScore(vec);
    cout << number << endl;
    return 0;
}
