#include <iostream>
#include <cmath>
using namespace std;

//declararea functiei
double power(double base, int exponent);
int suma (int a,int b);

int main() {
  //apelarea functiei
int suma1=suma (2,3);
cout <<suma1<<endl;

cout <<pow(2,3)<<endl; 
cout <<power(2,3)<<endl;//parametrii
}
double power(double base, int exponent){ //argumente
double result=1;
for(int i=0;i<exponent;i++){
result=result*base;
}
  return result;
}

//definirea functiei
int suma (int a,int b){

  return a+b;
}
