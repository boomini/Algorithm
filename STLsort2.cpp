#include <iostream>
#include <algorithm>

using namespace std;

class Student {
	public:
		string name;
		int score;
		Student(string name, int score){
			this->name = name;
			this->score= score;
		}
		//���� ������ ������ ���� ����
		bool operator <(Student &student) {
			return this->score <student.score;
		}
};

int main(void) {
	Student students[] = {
		Student("����",90),
		Student("������",80),
		Student("ļļļ",70),
		Student("������",60),
		Student("ŰŰŰ",50) 
	};
	sort(students,students+5);
	for(int i=0; i<5; i++){
		cout << students[i].name <<' ';
	}
}
