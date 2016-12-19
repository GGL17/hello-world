#include<iostream>
#include<vector>
using namespace std;
template <class T>
class Stack
{
 public:
 Stack(int = 10);
 bool push(const T&);
 bool pop(T&);
 private:
 int size;
 int top;
 T* stiva;
 bool isEmpty() const {return top == -1;}
 bool isFull() const {return top == size-1;}
};

template<class T>
Stack<T>::Stack(int s)
{
 size = s > 0 ? s : 10;
 top = -1;
 stiva = new T[size];
}

template<class T>
bool Stack<T>::push(const T& valoare)
{
 if(!isFull())
 {
 stiva[++top] = valoare;
 return true;
 }
 return false;
}

template<class T>
bool Stack<T>::pop(T& valoare)
{
 if(!isEmpty())
 {
 valoare = stiva[top--];
 return true;
 }
 return false;
}



template<class T>
class Stiva
{
public:
    bool isEmpty();
    void push(const T&);
    const T& top();
    void pop();
private:
    vector<T> vect;
};

template<class T>
bool Stiva<T>::isEmpty()
{
    return (vect.size() !=0 ? 0:1);
}

template<class T>
void Stiva<T>::push(const T& item)
{
    vect.push_back(item);
}

template<class T>
const T& Stiva<T>::top()
{
    return vect.back();
}

template<class T>
void Stiva<T>::pop()
{
    vect.pop_back();
}

int main()
{
 
}
