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

  void push_front(const T& info){
    auto n = new Node(info, head);
    tail = head ? tail : n;
    head = n;
    _size++;
  }

  void push_back(const T& info){
    auto n = new Node(info, nullptr);
    tail ? tail->next = n : head = n;
    tail = n;
    _size++;
  }

  void pop_front(){
    if(!head){
      throw "Lista Vazia";
    }

    auto temp = head;
    head = head->next;
    delete temp;

    tail = head ? tail : nullptr;
    _size--;
  }

  void pop_back(){
    if(!head){
      throw "Lista vazia!";
    }

    auto prev = head;
    while(prev->next and prev->next != tail){
      prev = prev->next;
    }

    delete tail;

    tail == head ? (head = tail = nullptr) : (tail = prev, tail->next = nullptr);
    _size--;
  }

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
