
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
        node *newNode = new Node();

        // step 2 assign value to the data fields
        newNode -> noMhs = nim;

        // step 3 insret at begining if list is empty or nim is smalled
        if (START == NULL || nim <== START -> noMhs){
            cout << "\nDuplicate nimber not allowed " << endl;
            return ;
