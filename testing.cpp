//
// Created by Tushar Asthana  on 9/26/23.
//

#include "Quiz.h"
#include <iostream>
using namespace std;

int main() {
    Quiz k;
    k.takeQuiz("PersonalQuiz.txt", cout, cin);

    k.getNumberOfQuestions();

    k.getTotalPointsPossible();

    k.getTotalPointsCorrect();

    k.setTitle("Google");
    k.getTitle();
    if (k.getTitle() != "Google"){
        cout << "wrong title" << endl;
    }

    k.getQuestion(1);
    return 0;


}
