// implement STACK data structure with 5 push operations, 3 pop operations and display the elements using arrays
#include<iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
    if(top>=n-1)
    cout<<"Stack Overflow"<<endl;
    else {
        top++;
        stack[top]=val;
    }
}

void pop() {
    if(top<=-1)
    cout<<"Stack Underflow"<<endl;
    else {
        cout<<"The popped element is "<< stack[top] <<endl;
        top--;
    }
}

void display() {
    if(top>=0) {
        cout<<"Stack elements are:";
        for(int i=top; i>=0; i--)
        cout<<stack[i]<<" ";
        cout<<endl;
    }else
    cout<<"Stack is empty";
}

int main() 
{
    int val;
    for (int i=0;i<5;i++){
        cin>>val;
        push(val);
    }

    pop();
    pop();
    display();
}
