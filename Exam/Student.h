#pragma once
#include <iostream>
using namespace std;


class Student {
private:
	string ns;
	int year;
	double am;
public:
	string NS() {
		return ns;
	}
	int Y() {
		return year;
	}
	void add_student(string ns1, int year1, double am1) {
		this->ns = ns1;
		this->year = year1;
		this->am = am1;
	}
};