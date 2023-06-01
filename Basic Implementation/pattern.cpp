#include <bits/stdc++.h>
using namespace std;

int main() {
  int size;
  cin>>size;
  
  for (int i = 1; i <= size; i++) {
    
    for (int j = size; j > i; j--) {
        cout << " ";
    }

    for (int k = 0; k < i; k++) {
        cout << "* ";
    }
        cout <<endl;
  }
  
  for (int i = 1; i < size; i++) {
    
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    
    for (int k = size - i; k > 0; k--) {
      cout << "* ";
    }
        cout <<endl;
  }
  
  return 0;



  /*for (int i = 1; i <= size; i++) {
    
    for (int j = size; j > i; j--) {
      cout << " ";
    }

    for (int k = 0; k < i * 2 - 1; k++) {
      cout << "*";
    }
    cout <<endl;
  }
  
  for (int i = 1; i <= size - 1; i++) {
    
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    
    for (int k = (size - i) * 2 - 1; k > 0; k--) {
      cout << "*";
    }
    cout <<endl; */
  

}
