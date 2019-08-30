#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

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

  void append(List& L){
    empty() ? head = L.head : tail->next = L.head;

    tail = L.tail;
    _size =+ L._size;

    L.head = L.tail = nullptr;
    L._size = 0;
  }

  void remove(const T& info){
    if(!head){
      throw -1;
    }

    if(info == front()){
      pop_front();
    }
    else if(info == back()){
      pop_back();
    }
    else{
      auto p = head;
      p = p->next;
      if(p && p != tail){
        auto temp = p;
        while(p->info != info && p->next != tail){
          temp = p;
          p = p->next;
          if(p->info == info){
            temp->next = p->next;
            delete p;
            _size--;
          } 
        }
      }
      else{
        throw "elemento nao encontrado!";
      }
    }
  }

  void remove_from(unsigned long pos){
    if(!head){
      throw "Lista Vazia";
    }
    if(pos > _size){
      throw "Posição invalida!";
    }

    if(pos == 1){
      pop_front();
    }
    else if(pos == _size){
      pop_back();
    }
    else{
      auto p = head;
      if(p && p != tail){
        auto temp = p;
        for(size_t i = 1; i < pos; ++i){
          temp = p;
          p = p->next;
          if((i+1) == pos){
            temp->next = p->next;
            delete p;
            _size--;
          }
        }
      }
      else{
        throw "Posição não encontrada";
      }
    }
  }

  void print() 
    {
        auto p = head;

        while (p)
        {
            auto next = p->next;
            cout << p->info << " ";
            p = next;
        }
        cout << endl;
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
