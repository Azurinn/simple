#include <iostream>

using namespace std;

int main () {
    
//    cout << "The natural numbers are:" << endl;
//    for (int i{1}; i <= 10; i++){
//        cout << i << " ";
//    }

//        int num{0}, fac{1};
//        cout << "Input a nuber to fint the factorial: " ;
//        cin >> num;
//        
//        for(int i{1}; i<=num; i++){
//            fac*=i;
//            
//        }
//        cout << "The factorial of the given number is: " << fac;

//    int sum{0}, value{0}, c{0};
//    cout << "Input the value for nth term: ";
//    cin >> value;
//    for (int i{1}; i <= value; i++){
//        c = i*i;
//        cout << endl << i << "*" << i << " = " << c;
//        sum +=c;
//    }
//    cout <<endl<< "The sum of the above series is: " << sum;

//    int c {0};
////    cout << "Input the number of characters for a side: ";
////    cin >> c;
////    for(int i {1}; i <= c; i++){
////        for(int j{1}; j <=c; j++){
////            cout <<"# ";
////            
////        }
////        cout <<endl;
////    }
    int c{0},cube{0};
    cout << "Input the number of terms: ";
    cin >> c;
    for(int i{1}; i <=c; i++){
        cube = i * i *i;
        cout << "Number is : " << i << " and the cube of " << c <<" is: " << cube << endl;
    }
        return 0;
    }
