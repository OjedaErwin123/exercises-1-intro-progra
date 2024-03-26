
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  string s4; 
  if (s1<s2 && s1<s3){
    s4=s1;
    cout<<s4;
  }
  else if (s2<s1 && s2<s3){
    s4=s2;
    cout<<s4;
  }
  else{
    cout<<s1;
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
  double z,c;
  if (b>a){
  if (n>a && n!=150){
    c= n*(1-(x/100));
    cout<<c;
    cout<<"\n";
  }
  else if (n>b){
    c= n*(1-(y/100));
    cout<<c;
    cout<<"\n";
  }
  else {
    cout<<n;
    cout<<"\n";
  }
  }
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
    case 2: cout<<"Martes\n"; break;
    case 3: cout<<"Miercoles\n"; break;
    case 4: cout<<"Thursday\n"; break;
    case 5: cout<<"Viernes\n"; break;
    case 6: cout<<"Sabado\n"; break;
    case 7: cout<<"Domingo\n"; break;
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
    cout<<"Error: Radius cannot be negative.\n";
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
  int x,y,q,r;
  if (seconds>0){
    q=seconds/3600;
    x=seconds % 3600;    
    r=x/60;
    y=x%60;
    cout<<setw(2)<<setfill('0')<<q<<":"
    <<setw(2)<<setfill('0')<<r<<":"
    <<setw(2)<<setfill('0')<<y<<"\n";
  }
  else {
    //cout<<"Error: Input seconds cannot be negative.\n";
    cout<<"00:00:00\n";


  }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  int lon1;
  lon1=s2.length()-1;
  if(s1[0]==s2[lon1]){
    return "Hemos encontrado algo";
  }
  else {
    return "Aun sin suerte";
  }

int exercise_10(int a, int b) {
  // <>TODO: YOUR CODE HERE
  int s,c;
  
  if (a<0 || b<0)
    return 0;
  s = a+b;
  c= 1;
  while (s>10){
    s/= 10;
    c++;

  }
  return c*(a+b); 
  
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  int f= 11235813; 
  if(number == f ){
    return "Se encontro a Fibonacci";
  }
  else{
    return "Esto no es de Fibonacci";
  }
  
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  if(age>=18){
    if(years_of_experience>= 5){
      return "Senior project manager";
    }
    else if (years_of_experience>=3 && years_of_experience<5){
      return "Project manager";
    }
    else {
      return "Project coordinator";
    }
  }
  else {
    return "Not eligible";
  }
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if (number_of_docs <= 0){
    return "No se encontraron documentos";
    }
  else if (number_of_docs == 1){
    return "Se encontro un documento";
  }
  else (number_of_docs >= 2);{
    return to_string(number_of_docs)+" documentos encontrados";
  }

 
  
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  int x,y,z;
  x = c;
  y = a;
  z = b;
  cout <<"Los valores son: a = "<<a;
  cout<<" b = "<<b;
  cout<<" y c = "<<c;
  cout<<"\nPermutamos: a => b, b => c, c => a\n";
  a=x;
  b=y;
  c=z;
  cout<<"Los valores despues de la permutacion son: a = "<<a;
  cout<<" b = "<<b;
  cout<<" c = "<<c;
  cout<<"\n"; 
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}