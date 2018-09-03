// first include the library
#include <iostream>
using namespace std;
// using main function
int main(){
// declaring variables
float a, b, c, max;
// asking the user three numbers
cout<< "What are the numbers";
cin>> a >> b >> c;
// conditions
if (a > b && a > c){
   max = a;
}
else if (b > a && b > c){
        max = b;
}
else {
     max = c;
}
// print the results
cout << "The maximum number is" <<endl;
cout<< max<< endl;
}

