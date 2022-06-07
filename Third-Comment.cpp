#include <iostream>

using namespace std;

void lexical(string expression){

char singleLine='/';
char multipleLine2='*';
int length=expression.length();

    if(expression[0]==singleLine && expression[1]==singleLine)
        cout<<"Single Line Comment";
    if((expression[0]==singleLine && expression[1]==multipleLine2) && (expression[length-2]==multipleLine2 && expression[length-1]==singleLine))
        cout<<"Multiple Line Comment";

}



int main(){

string expression = "";
cin>>expression;
lexical(expression);

}
