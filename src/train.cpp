// Copyright 2021 Ilya Urtyukov
#include <cstdlib>
#include <ctime>
#include <iostream>

#include "train.h"

Cage::Cage(bool l) {
  light = l;
  prev = nullptr;
  next = nullptr;
}

void Cage::on() {
  light = true;
}

void Cage::off() {
  light = false;
}

bool Cage::get() const {
  return light;
}

void Cage::set_next(Cage* a) {
  next = a;
}

void Cage::set_prev(Cage* a) {
  prev = a;
}

Cage* Cage::get_next() const {
  return next;
}

Cage* Cage::get_prev() const {
  return prev;
}

void Train::set_first(Cage* a) {
  first = a;
}

void Train::set_last(Cage* a) {
  last = a;
}

Cage* Train::get_first() const {
  return first;
}

Cage* Train::get_last() const {
  return last;
}

void Train::addCage() {
  srand(time(0));
  if (this->get_first() == nullptr) {
    set_first(new Cage(rand()%2));
  }
  else if (this->get_last() == nullptr) {
    Cage* a = new Cage(rand()%2);
    Cage* b = this->get_first();
    a->set_next(b);
    a->set_prev(b);
    b->set_next(a);
    b->set_prev(a);    
    this->set_last(a);
  }
  else {
    Cage* a = new Cage(rand()%2);
    this->get_last()->set_next(a);
    this->get_first()->set_prev(a);
    this->set_last(a);
  }
}

void Train::addCage(int count) {
  for (size_t i = 0; i < count; ++i) {
    this->addCage();    
  }
}

Train::Train(int count) {
  first = nullptr;
  last = nullptr;
  addCage (count);
}

void Train::print(int n) const{
  Cage* a = get_first();
  if (a != nullptr){
    for (size_t i = 0; i < n; ++i) {
      std::cout<<"Вагон номер: "<<i+1<<". Лампочка: "<<a->get()<<std::endl;
      a = a->get_next();
    }
  }
}

int Train::get() const {
  Cage* a = get_first();
  if (a == nullptr) return 0;
  int i;
  a->off();
  while (a->get() == false) { 
    i = 0;
    a = a->get_next();
    i++;
    while (a->get() == true) {
      a = a->get_next();
      i++;
    }
    a->on();
    for (size_t j = i ; j > 0; --j) a = a->get_prev();
  } 
   return i; 
}

