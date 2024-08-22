#include <iostream>
#include <string>
using namespace std;

int Guess;
int total;
class question
{
private:
    string question_text;
    string answer_1;
    string answer_2;
    string answer_3;
    string answer_4;

    int correct_answer;
    int question_score;

public:
    void setvalue(string, string, string, string, string, int, int);
    void askquestion();
};

int main()
{
    cout << "Press Enter to start the quiz..." << endl;
    cin.get();
    string name;
    int age;
    cout << "what is your name" << endl;
    cin >> name;

    cout << "how old are you ?" << endl;
    cin >> age;

    string response;
    cout << "are you reary for quiz: " << name << " ? (yes /no)  " << endl;
    cin >> response;
    if (response == "yes")
    {

        cout << "ok ! good luck !" << endl;
    }
    else
    {
        cout << "ok ! goodbye !" << endl;
        return 0;
    }
    question q1;
    question q2;
    question q3;
    question q4;
    question q5;
    question q6;
    question q7;
    question q8;
    question q9;
    question q10;

    q1.setvalue("what is the only function all c++ programs must contain ?", "start()", "system()", "main()", "program()", 3, 10);
    q2.setvalue("which is correct ?", "*/ comment", "/*comment */", "**comment**", "(comments)", 2, 10);
    q3.setvalue("the statement i++; is equivalent to ?", "i=i+i", "i=i+1", "i=i-1", "i--", 2, 10);
    q4.setvalue("in c++,14%4 =  ?", "3", "1", "5", "2", 4, 10);
    q5.setvalue("wrapping of data and function into single unit is known as  ?", "encapsulation ", "binding", "polymorphism", "nothing", 1, 10);
    q6.setvalue("the name of a variable is known as its ?", "identifier", "constant", "data type", "base", 1, 10);
    q7.setvalue("in int main() ,what does the int stand for ?", "initialize", "integer", "inhertance", "nothing", 2, 10);
    q8.setvalue("hiding unnecessory data from user ,known as  ?", "inheritanc", "polymorphism", "abstraction", "none of the above", 3, 10);

    q9.setvalue("characteristics of oops ?", "data abstraction", "incapsulation", "inheritance", "all the above", 4, 10);
    q10.setvalue(" when a data type must contain decimal numbers ,assign the type :?", "int", "float", "long int", "double", 2, 10);

    q1.askquestion();
    q2.askquestion();
    q3.askquestion();
    q4.askquestion();
    q5.askquestion();
    q6.askquestion();
    q7.askquestion();
    q8.askquestion();
    q9.askquestion();
    q10.askquestion();

    cout << "your total score is " << total << "out of 100" << endl;

    if (total >= 70)
    {

        cout << "great : you pass the quiz!" << endl;
        cout << "congratulation:" << endl;
    }
    else
    {
        cout << "sorry ! you failed the quiz " << endl;
    }
    return 0;
}

void question::setvalue(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
    question_text = q;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    question_score = pa;
}

void question::askquestion()
{

    cout << question_text << endl;
    cout << "1. " << answer_1 << endl;
    cout << "2. " << answer_2 << endl;
    cout << "3. " << answer_3 << endl;
    cout << "4. " << answer_4 << endl;
    cout << "what is your answer?" << endl;
    cin >> Guess;
    if (Guess == correct_answer)
    {
        cout << endl;
        cout << "good ! correct answer !" << endl;
        total = total + question_score;
        cout << "score :" << question_score << "out of" << question_score
             << "! " << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "oh no ! you are wrong" << endl;
        cout << "score :0" << "out of" << question_score << "!" << endl;
        cout << "the correct answer is " << correct_answer << "," << endl;
        cout << endl;
    }
}
