// Copyright 2021 Ilya Urtyukov
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Cage {
 private:
    bool light;
    Cage* next;
    Cage* prev;
 public:
    Cage(bool l = false);
    void on();
    void off();
    void set_next(Cage*);
    void set_prev(Cage*);
    bool get() const;
    Cage* get_next() const;
    Cage* get_prev() const;
};

class Train {
 private:
    Cage* first;
    Cage* last;
 public:
    void set_first(Cage*);
    void set_last(Cage*);
    Cage* get_first() const;
    Cage* get_last() const;
    void addCage();
    void addCage(int);
    Train(int count = 0);
    void print(int) const;
    int get() const;
};

#endif  // INCLUDE_TRAIN_H_
