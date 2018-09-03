// first include the library
#include <iostream>
using namespace std;
// using the main function
int main(){
// declaring variables
float a, zero, positive, negative;
// asking the values
cout<< "Enter the numbers" << endl;
cin>> a;
// conditions
if (a<0){
cout << "negative"<< endl;
}
else if (a==0){
cout << "zero" <<endl;
}
else{
cout<< "positive" <<endl;
}
return 0;
}



