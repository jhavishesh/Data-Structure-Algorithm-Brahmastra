#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack {
    int top;
public:
    int arr[MAX];
    Stack() {
        top=-1;
    }
    void push(int x);
    void pop();
    void peek();
    bool isEmpty();

};
void Stack::push(int x) {
    if(top>MAX)
        cout<<"Overflow"<<endl;
    else {
        arr[++top]=x;

        cout<<x<<" is Pushed"<<endl;
    }
}
void Stack::pop() {
    if(top<0)
        cout<<"Underflow"<<endl;
    else {
        int p=arr[top--];

        cout<<p<<" is Popped"<<endl;
    }
}
void Stack::peek() {
    cout<<"Top element is "<<arr[top]<<endl;
}
bool Stack:: isEmpty() {
    return (top<0);
}
int main() {
    Stack p1;
    p1.peek();
    p1.push(23);
    p1.push(22);
    p1.push(21);
    p1.pop();
    p1.pop();
    p1.peek();


    return 0;
}
