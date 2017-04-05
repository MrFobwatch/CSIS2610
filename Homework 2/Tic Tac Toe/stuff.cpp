///* 
// * File:   main.cpp
// * Author: Kevin
// *
// * Created on February 8, 2017, 1:30 PM
// */
//
//#include <cstdlib>
//#include <iostream>
//
//using namespace std;
//
//char computerChoice(){
//    int choice = rand() % 3;
//    if (choice == 1) {
//        return 'r';        
//    }
//    else if (choice == 2) {
//        return 'p';
//    }
//    else if (choice == 3) {
//        return 's';
//    }
//}
//
//char getUserChoice() {
//    char choice;
//    cout << "Choose Rock:R, Paper:P, or Scissors:S" << endl;
//    cin >> choice;
//    if (choice == ('R' ||'r')){
//        return 'r';        
//    }
//    else if (choice == ('P' || 'p')){
//        return 'p';
//    }
//    else if (choice == ('S' || 's')){
//        return 's';
//    }
//}
//
//void compareChoice() {
//    char user = getUserChoice();
//    char comp = computerChoice();
//    if (user == comp){
//        cout << "You both chose the same symbol. Try again.";
//        compareChoice();
//    }
//    else if(user == 'r'){
//        if (comp == 's'){
//            cout << "YOU WON";
//            exit(0);
//        }
//        else if (comp == 'p'){
//            cout << "YOU LOST";
//            exit(0);
//        }
//    }
//    else if(user == 'p'){
//        if (comp == 'r'){
//            cout << "YOU WON";
//            exit(0);
//        }
//        else if (comp == 's'){
//            cout << "YOU LOST";
//            exit(0);
//        }
//    }
//    else if(user == 's'){
//        if (comp == 'p'){
//            cout << "YOU WON";
//            exit(0);
//        }
//        else if (comp == 'r'){
//            cout << "YOU LOST";
//            exit(0);
//        }
//    }
//        
//}
////int main(int argc, char** argv) {
//    compareChoice();    
//    return 0;
//}
//
