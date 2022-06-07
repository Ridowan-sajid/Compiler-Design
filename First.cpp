#include<iostream>

using namespace std;

void lexical(string expression){

    char identifier[4]={'x','y','X','Y'};
    char operat[5]={'+','-','*','/','='};
    char number[10]={'0','1','2','3','4','5','6','7','8','9'};



    cout<<"Operator: ";
    for(int i=0;i<expression.length();i++){
        for(int j=0;j<5;j++){
            if(expression[i]==operat[j]){
                cout<<expression[i]<<" ";
            }
        }
    }
    cout<<endl;
    cout<<"Number: ";
    for(int i=0;i<expression.length();i++){
        for(int j=0;j<10;j++){
            if(expression[i]==number[j]){
                cout<<expression[i]<<" ";
            }
        }
    }
    cout<<endl;

    cout<<"Identifier: ";
    for(int i=0;i<expression.length();i++){
        for(int j=0;j<4;j++){
            if(expression[i]==identifier[j]){
                cout<<expression[i]<<" ";
            }
        }
    }


}



int main(){

string expression="y=6+3";
lexical(expression);

}
