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
 Stack<double> doubleStack(5);
 double f = 1.1;
 cout << "Inserarea elementelor in doubleStack\n";
 while(doubleStack.push(f))
 {
 cout << f << ' ';
 f += 1.1;
 }
 cout << "\nStiva este plina. "
 << "Nu se mai poate insera elementul " << f
 << "\n\nExtragerea elementelor din doubleStack\n";

 while(doubleStack.pop(f))
 cout << f << ' ';
 cout << "\nStiva este goala. "
 << "Nu se mai pot extrage elemente\n";

 Stack<int> intStack;
 int i = 1;
 cout << "\nInserarea elementelor in intStack\n";
 while(intStack.push(i))
 {
 cout << i << ' ';
 ++i;
 }
 cout << "\nStiva este plina. "
 << "Nu se mai poate insera elementul " << i
 << "\n\nExtragerea elementelor din intStack\n";

 while(intStack.pop(i))
 cout << i << ' ';
 cout << "\nStiva este goala. "
 << "Nu se mai pot extrage elemente\n";




 Stiva<int> s;
    s.push(4);
    s.push(5);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    if(s.isEmpty())
        cout<<"stiva este goala";
    else
        cout<<"nu";
 return 0;
}
