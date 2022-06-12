#include<iostream>

using namespace std;

string lexicalComment(string expression){

char singleLine='/';
char multipleLine2='*';
string expression2="";
int length=expression.length();

    if(expression[0]==singleLine && expression[1]==singleLine){
         cout<<"           => Single Line Comment!";
         expression2=expression.substr(2,expression.length()-2);
    }
    else if((expression[0]==singleLine && expression[1]==multipleLine2) && (expression[length-2]==multipleLine2 && expression[length-1]==singleLine)){
        cout<<"           => Multiple Line Comment!";
        expression2=expression.substr(2,expression.length()-4);
    }
    else{
        cout<<"           => Comment Didn't Found!";
        expression2=expression;
    }

    cout<<endl;

    return expression2;
}

void lexical1(string expression){

    //string expression2=expression.substr(3,expression.length()-5);

    char identifier[4]={'x','y','X','Y'};
    char operat[5]={'+','-','*','/','='};
    char number[10]={'0','1','2','3','4','5','6','7','8','9'};



    cout<<"           => Operator: ";
    for(int i=0;i<expression.length();i++){
        for(int j=0;j<5;j++){
            if(expression[i]==operat[j]){
                cout<<expression[i]<<" ";
            }
        }
    }
    cout<<endl;
    cout<<"           => Number: ";
    for(int i=0;i<expression.length();i++){
        for(int j=0;j<10;j++){
            if(expression[i]==number[j]){
                cout<<expression[i]<<" ";
            }
        }
    }
    cout<<endl;

    cout<<"           => Identifier: ";
    for(int i=0;i<expression.length();i++){
        for(int j=0;j<4;j++){
            if(expression[i]==identifier[j]){
                cout<<expression[i]<<" ";
            }
        }
    }
    cout<<endl;


}

void lexical2(string expression){

    char number[10]={'0','1','2','3','4','5','6','7','8','9'};
    int k=0;


    if((expression[0]>=65 && expression[0]<=90) || (expression[0]>=97 && expression[0]<=122) || expression[0]=='_'){
        for(int i=0;i<10;i++){
            if(expression[1]==number[i]){
                cout<<"           => Identifier Valid!";
                cout<<"           => Alphabet: "<<expression[0]<<" , "<<expression[1];
                k=1;
            }else if(i==10){
                k=0;
            }


        }
    }
    if(k==0){
        cout<<"           => Didn't match with keyword!";
    }
    cout<<endl;

}



void lexicalKeyword(string expression){

string keyword[32]={"auto","double","int",
  "struct","break","else","long","switch","case",
  "enum","register","typedef","char","extern",
  "return","union","continue","for","signed",
  "void","do","if","static","while","default","goto",
  "sizeof","volatile","const","float","short","unsigned"};




int found=0;
for(int i=0;i<32;i++){
  if(keyword[i]==expression){
    cout<<"           => Keyword is valid and it is: "<<keyword[i];
    found=1;
    break;
      }
      else{
        found=0;
      }

    }
    if(found==0){
      cout<<"           => Keyword didn't found ";
    }

    cout<<endl;



}

int isDigit(string input){
    for(int i=0;i<input.length();i++){
        if(isdigit(input[i])){
            return 1;
        }
    }

    return 0;

}

int main(){

string expression="";
cout<<"================================================="<<endl;
cout<<"           => Enter an expression: ";
getline(cin,expression);

cout<<"           => Expression is: "<<expression<<endl;
string expression2=lexicalComment(expression);
lexical1(expression2);
lexical2(expression2);
lexicalKeyword(expression2);
if(isDigit(expression2)){
    cout<<"           => Expression has a number!";
}else{
    cout<<"           => Expression has no number!";
}
cout<<endl;
cout<<"================================================="<<endl;
}
