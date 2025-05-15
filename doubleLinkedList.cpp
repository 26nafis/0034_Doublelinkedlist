
#include <iostream>
#include <string>
using namespace std;
 
class node 
{
    public:
        int noMhs;
        node *next;
        node *prev;
};

class DoubleLinkedList
{
      private:
      node *START;

      public:
      DoubleLinkedList(){
              START = NULL;
      }
      void addnode (){
        int nim;
        string nama;
        cout << "\n Enter the roll nimber of the student";
        cin >> nim;
      }
};