
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  string s= to_string(s1);

  if (s>s2){
     s = s2; 
     }
  else (s>s3){ 
    s=s3;
    }
  cout<<s ;
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  int result = 0;

  if(b=0){
    cout<<"Imposible ";
  }


  result = (a / b);

  if (result>0){
    cout <<"Tu division es: "<<result;
  } 
  else (result<0){
    cout <<"Tu division es: "<<result;
  }

}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  switch (number){
    case 1: cout <<"Hoy es LUNES";break;
    case 2: cout <<"Hoy es MARTES";break;
    case 3: cout <<"Hoy es MIERCOLES";break;
    case 4: cout <<"Hoy es JUEVES";break;
    case 5: cout <<"Hoy es VIERNES";break;
    case 6: cout <<"Hoy es SABADO";break;
    case 7: cout <<"Hoy es DOMINGO";break;

    default : cout<< "Invalid input"

  }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
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