#include <iostream>
using namespace std;
//AABAABABBB
class LetterPrinter{
    public:
        LetterPrinter(){cout << "A";}
        ~LetterPrinter(){cout << "B";}
};


int main(){

    LetterPrinter a;
    {
        LetterPrinter b;
    }
    LetterPrinter c;
    {
        LetterPrinter d;
    }
    LetterPrinter e;

    return 0;
}