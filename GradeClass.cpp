#include <iostream>
using namespace std;

char GRADE_MAP[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};

class Grade {
    public:
        char letter;
        int percent;
        void setByPercent(int newPercent){
            this->percent = newPercent; 
            this->letter = GRADE_MAP[percent / 10];
        }
        void setByLetter(char newLetter){
            this->letter = newLetter;
            this->percent = 100 - (letter - 'A') * 10 - 5;
        }
        void print(){
            cout << "grade: " << letter << endl << "percent: " << percent << "%" << endl;
        }

};      


int main(){

    Grade g; 	
    int percent;
    std::cout << "Enter two grades separated by a space. Use a percentage for the first and letter for the second:\n";
    std::cin >> percent; cin.ignore();
    g.setByPercent(percent); 	
    g.print(); 
    g.setByLetter(std::cin.get()); 	
    g.print(); 


    return 0;
}