#include <iostream>



using namespace std;

void lexical(string expression){
  
string keyword[32]={"auto","double","int",
  "struct","break","else","long","switch","case",
  "enum","register","typedef","char","extern",
  "return","union","continue","for","signed",
  "void","do","if","static","while","default","goto",
  "sizeof","volatile","const","float","short","unsigned"};




int found=0;
for(int i=0;i<32;i++){
  if(keyword[i]==expression){
    cout<<"Keyword is valid and it is: "<<keyword[i];
    found=1;
    break;
  }
  else{
    found=0;
  }

}
if(found==0){
  cout<<"Keyword didn't found ";
}



}




int main() {



  string expression = "";
  cout<<"Enter a keyword: ";
  cin>>expression;
  lexical(expression);



  return 0;
}
