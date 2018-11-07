#ifndef LIST_H
#define LIST_H

template<typename T>

class List {
public:
  List() : head(nullptr), tail(nullptr), _size(0){}
  ~List(){
    auto p = head;

    while(p){
      auto next = p->next;
      delete p;
      p = next;
    }
  }

  const T& front() const{
    if(head)
      return head->info;
    else
      throw "Empty list!";
  }

  const T& back() const {
    if(tail)
      return tail->info;
    else
      throw "Empty list!";
  }

  bool empty() const { return head == nullptr; }

  unsigned long size() const { return _size; }


private:
  struct Node{
    T info;
    Node *next;

    Node(const T& i, Node *n) : info(i), next(n) {}
  };

  Node *head, *tail;
  unsigned long _size;
};

#endif
