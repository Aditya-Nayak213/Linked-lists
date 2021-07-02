#include <iostream>
struct node
{ int data;
  node *next; //to store the next field address
};

class stack
{ node *top;
  public: 
  stack()
  { top = NULL; }
  void push();
  void pop();
  void display();
  ~stack()
  { while( top != NULL)
    { node *temp = top;
      top = top->next;
      delete temp;
    }
  }
};

void stack :: push()
{ node *temp;
  temp = new node;
  std :: cout << "Enter data: ";
  std :: cin >> temp->data;
  temp->next = top;
  top = temp;
}

void stack :: pop()
{ if(top != NULL)
  { node *temp = top;
    top = top->next;
    std :: cout << temp->data << "  deleted\n";
    delete temp;
  }
  else
    std :: cout << "stack empty";
}

void stack :: display()
{ if(top == NULL)
    std :: cout << "stack is empty.";
  else if(top != NULL)
  { node *temp = top;
    while(temp != NULL)
    { std :: cout << temp->data << "->"; 
      temp = temp->next;
    }
    std :: cout << "\n";
  }
  else 
    std :: cout << "wrong input.";
}

int main()
{ stack pio;
  char ch = 'y';
  int n;
  do
  { std :: cout << "\n1. Push\n";
    std :: cout << "2. Pop\n";
    std :: cout << "3. Display\n";
    std :: cout << "Enter the choice: ";
    std :: cin >> n;
    if(n == 1)
       pio.push();
    else if(n == 2)
       pio.pop();
    else if(n== 3)
        pio.display();
    else
       std :: cout << "wrong choice entered.";
    std :: cout << "Enter the choice(y/n)......";
    std :: cin >> ch;
  } while(ch == 'y' || ch == 'Y');
  return 0;
}