#include <iostream>

const int SIZE = 100;
using namespace std;
template <class T>
class MyStack
{
private:
    T arr[SIZE];
    int top;

public:
    MyStack() : top(-1) {}

    int push(T x)
    {
        if (isFull())
        {
            cout << "Overflow" << endl;
            return -1;
        }
        arr[++top] = x;
        return 0;
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "No data filled." << endl;
            return 0;
        }
        return arr[top];
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Underflow" << endl;
            return -1;
        }
        top--;
        return 0;
    }

    int isEmpty()
    {
        return top == -1;
    }

    int isFull()
    {
        return top == SIZE - 1;
    }

    void displayFromBottom(MyStack &S)
    {
        MyStack temp;
        while (!S.isEmpty())
        {
            temp.push(S.peek());
            S.pop();
        }
        while (!temp.isEmpty())
        {
            S.push(temp.peek());
            cout << temp.peek() << ", ";
            temp.pop();
        }
        cout << endl;
    }
};

// Infix to Postfix convertion
#include <string>
#include <iostream>
#include <MyStack.h>

    using namespace std;
int precedence(char c)
{
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^')
        return 3;
    return 0;
}

string InfToPostF(const string inf)
{
    MyStack<char> St;
    string postf = "";

    for (char c : inf)
    {
        if (isalnum(c))
        {
            postf += c;
        }
        else if (c == '(')
        {
            St.push(c);
        }
        else if (c == ')')
        {
            while (!St.isEmpty() && St.peek() != '(')
            {
                postf += ", ";
                postf += St.peek();
                St.pop();
            }
            St.pop();
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            postf += ", ";
            while (!St.isEmpty() && precedence(c) < precedence(St.peek()))
            {
                postf += St.peek();
                St.pop();
                postf += ", ";
            }
            while (!St.isEmpty() && precedence(c) == precedence(St.peek()))
            {
                if (c == '^')
                {
                    break;
                }
                postf += St.peek();
                St.pop();
                postf += ", ";
            }
            St.push(c);
        }
    }
    while (!St.isEmpty())
    {
        postf += ", ";
        postf += St.peek();
        St.pop();
    }

    return postf;
}
int main()
{
    string s;
    getline(cin, s);
    string p = InfToPostF(s);
    cout << p << endl;
}