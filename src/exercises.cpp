
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  if (s1>s2 && s1>s3)
  {
    cout<<s1;
  }
  else if (s2>s1 && s2>s3)
  {
    cout<<s2;
  }
  else
  {
    cout<<s3;
  }
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
}

void exercise_3(int a, int b) {
  // \TODO: YOUR CODE HERE 
  int x;
  if (a>0 && b>0){
    x= a/b;
    cout<<x;
    cout<<"\n";
  }
  else{
    cout<<"Impossible\n";
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  int valor;
  valor= int (character);
  if(valor>=65 && valor<=90){
    cout<<"upper-case alphabet\n";
  }
  else if (valor>=97 && valor<=122){
    cout<<"lower-case alphabet\n";
  }
  else{
    cout<<"not an alphabet\n";
  }
}

void exercise_6(int number) {
  // \TODO: YOUR CODE HERE
  switch (number)
  {
    case 1: cout<<"Monday\n"; break;
    case 2: cout<<"Martes"; break;
    case 3: cout<<"Miercoles"; break;
    case 4: cout<<"Thursday\n"; break;
    case 5: cout<<"Viernes"; break;
    case 6: cout<<"Sabado"; break;
    case 7: cout<<"Domingo"; break;
    default: cout<<"Invalid input\n";break;
  }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE <>
  double x,y;
  y=3.14;
  if (r>=0){
    x= 4 *y* pow(r,2);
    cout<<x;
    cout<<"\n";
  }
  else{
    cout<<"Error: Radius cannot be negative.";
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE

}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // <>TODO: YOUR CODE HERE
 
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}