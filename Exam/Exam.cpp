#include "Group.h"
int main()
{
    Student ivan;
    ivan.add_student("Ivan Ivanov", 2000, 4.6);
    Student petya;
    petya.add_student("Petya Petrov", 2007, 3.6);
    vector<Student> group1;
    Group G;
    group1.push_back(ivan);
    group1.push_back(petya);
    group_file(group1);
    G.show_group_year(group1, 18);
    cout << endl;
    G.show_group(group1);
}
