#include <iostream>
struct node
{ int info;
  node *next;
} *start,*newptr,*save,*ptr;

node *create_new_node(int);
void insert_beg(node*);
void display(node*);

int main() 
{ start = NULL;
  int inf; 
  char ch = 'y';
  while(ch == 'y' || ch == 'Y')
  { std :: cout << "\n Enter data: ";
    std :: cin >> inf;
    std :: cout << "Creating a new node, hold on....\n";
    newptr = create_new_node(inf);
    if (newptr != NULL)
    { std :: cout << "New node created, now lets continue.\n"; }
    else
    { std :: cout << "Cannot create a new node.\n"; }
    std :: cout << "Inserting the node at beginning.\n";
    insert_beg(newptr);
    std :: cout << "Now the list is: ";
    display(start);
    std :: cout << "\n";
    std :: cout << "Enter the choice to continue(y/n)......";
    std :: cin >> ch;
  }
  return 0;
}

node * create_new_node(int n)
{ ptr = new node;
  ptr->info = n;
  ptr->next = NULL;
  return ptr;
}

void insert_beg(node *np)
{ if(start == NULL)
    start = np;
  else
  { save = start;
    start = np;
    np->next = save;
  }
}

void display(node *np)
{ while(np != NULL)
  { std :: cout << np->info <<"->";
    np = np->next;
  }
  std :: cout << "\n";
}

