#include<iostream>
using namespace std;

class GradeCard{
    const int rno;
    string name,dept;
    const int sem = 3;
    int tot_sub;
    float cgpa;
public:
    GradeCard(int rollNo, string name,float marks[],int tot_sub,string dept = "IT"):rno(rollNo){
        this->name = name;
        this->dept = dept;
        this->tot_sub = tot_sub;
        this->cgpa = calc_CGPA(marks,this->tot_sub);
    }
    float calc_CGPA(float marks[],int tot_sub){
        double total_marks = 0.0;
        for (int i = 0; i < tot_sub; i++){
            total_marks += marks[i];
        }
        return (((total_marks/tot_sub))/9.5);
    }
    float get_cgpa(){
        return cgpa;
    }
    void disp(){
        cout << " Name = " << name << endl;
        cout << " Roll No = " << rno << endl;
        cout << " CGPA = " << cgpa << endl;
    }
    
};
int main(){
    GradeCard *stud[3];
    string nm,dname;
    int los;
    for (int i = 0; i < 3; i++){
        cout << "Name = ";
        cin >> nm;
        cout << "Department = ";
        cin >> dname;
        cout << "List of Subjects = ";
        cin >> los;
        float marks[los];
        for(int j = 0; j < los; j++){
            cin >> marks[j];
        }
        stud[i] = new GradeCard(i+1,nm,marks,los,dname);
        cout << endl;
    }
    int max = stud[0]->get_cgpa();
    int kmax = 0;
    for (int k = 1; k < 3; k++){
        if(max < stud[k]->get_cgpa()){
            max = stud[k]->get_cgpa();
            kmax = k;
        }
    }
    cout << endl;
    cout << "Topper of the Batch : " << endl;
    stud[kmax]->disp();
    return 0;
}