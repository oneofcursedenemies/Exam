#pragma once
#include <vector>
#include <fstream>
#include <algorithm>
#include "Student.h"

class Group {
private:
	vector<Student> group;
public:
	void show_group(vector<Student> group1);
	void show_group_year(vector<Student> group1, int yo);
	void group_file(vector<Student> group1);
};

void Group::show_group(vector<Student> group1){
	for (int i = 0; i < size(group1); i++) {
		cout << group1[i].NS() << endl;
	}
}

void Group::show_group_year(vector<Student> group1, int yo) {
	for (int i = 0; i < size(group1); i++) {
		if (2023 - group1[i].Y() >= yo) {
			cout << group1[i].NS() << endl;
		}
	}
}

void group_file(vector<Student> group1) {
	ofstream out;
	out.open("D:\\Projects\\Exam\\group.txt");
	for (int i = 0; i < size(group1); i++) {
		out << group1[i].NS() << endl;
	}
}

