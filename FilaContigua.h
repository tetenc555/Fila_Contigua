#ifndef FILACONTIGUA_H__
#define FILACONTIGUA_H__
#include <iostream>

using namespace std;

class FilaContigua
{
    public:
        FilaContigua(int max);
        ~FilaContigua();
        int get(int p);
        int getSize();
        void set(int p, int val);
        void newEnd(int val);
        void deleteEnd();
        void newNode(int p, int val);
        void deleteNode(int p);

    private:
        int n;
        int max;
        int* vet;
};

#endif