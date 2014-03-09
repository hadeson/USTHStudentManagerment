#include "StudentList.h"

string output_text_file = "USTH_student_list.txt";
string input_text_file = "USTH_student_list.txt";
Student usth_student_list[1000];
int stu_list_size = 0;

//Check if the ID is valid
bool isValidID(int id) {
	for (int i = 0; i < stu_list_size; ++i) {
		int currentID = usth_student_list[i].Get_id();
		if (currentID == id) return true;
	}
	return false;
}

//return the position of the ID on array
//return -1 if fail

int posOfID(int id) {
	for (int i = 0; i < stu_list_size; ++i) {
		int currentID = usth_student_list[i].Get_id();
		if (currentID == id) return i;
	}
	return -1;
}


