#include <iostream>
using namespace std;
#include <cmath>
#include <string>

enum enGrades{A=1,B=2, C=3, D=4, E=5, F=6};

int readGrade(){

  int num;
  cout << "\n Enter your grade \n";
  cin >> num;
  return num;

}

enGrades checkGrade(int grade)
{
    if(grade <= 100 && grade >= 90)
      return enGrades::A;

    else if(grade <= 89 && grade >= 80)
      return enGrades::B;

    else if(grade <= 79 && grade >= 70)
      return enGrades::C;

    else if(grade <= 69 && grade >= 60)
      return enGrades::D;

    else if(grade <= 59 && grade >= 50)
      return enGrades::E;

    else
      return enGrades::F;
}

string reponse(enGrades answer)
{
    if(answer == enGrades::A)
        return "\n result is A \n";
    else if (answer == enGrades::B)
        return "\n resutlt is B \n";
    else if(answer == enGrades::C)
        return "\n result is C \n";
    else if(answer == enGrades::D)
        return "\n result is D\n";
    else if(answer == enGrades::E)
        return "\n result is E\n";
    else
        return "\n result is F \n";
}

int main(){
cout << reponse(checkGrade(readGrade()));
return 0;
}