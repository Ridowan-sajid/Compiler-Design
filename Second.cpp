
#include <iostream>

using namespace std;



void lexical(string expression){

    char number[10]={'0','1','2','3','4','5','6','7','8','9'};
    int k=0;


    if((expression[0]>=65 && expression[0]<=90) || (expression[0]>=97 && expression[0]<=122) || expression[0]=='_'){
        for(int i=0;i<10;i++){
            if(expression[1]==number[i]){
                cout<<"Identifier Valid!";
                cout<<"Alphabet: "<<expression[0]<<" , "<<expression[1];
                
            }
            
        }
    }
    else{
        cout<<"Didn't found!";
    }


}



int main(){

string expression = "";
cout<<"Enter your expression: ";
cin>>expression;
lexical(expression);

}
