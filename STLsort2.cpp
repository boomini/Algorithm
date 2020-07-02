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
		//정렬 기준은 점수가 작은 순서
		bool operator <(Student &student) {
			return this->score <student.score;
		}
};

int main(void) {
	Student students[] = {
		Student("김김김",90),
		Student("헤헤헤",80),
		Student("캬캬캬",70),
		Student("쿄쿄쿄",60),
		Student("키키키",50) 
	};
	sort(students,students+5);
	for(int i=0; i<5; i++){
		cout << students[i].name <<' ';
	}
}
