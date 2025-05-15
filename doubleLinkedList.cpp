
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
        node *newNode = new node();

        // step 2 assign value to the data fields
        newNode -> noMhs = nim;

        // step 3 insret at begining if list is empty or nim is smalled
        if (START == NULL || nim <= START -> noMhs){
            cout << "\nDuplicate nimber not allowed " << endl;
            return ;
        }
        //step 4 newNode.next = START 
        newNode->next = START;

        // step 5  start,prev = newnode (if start exist)
        if (START != NULL)
        START-> prev = newNode;

        //step 6 newnode.prev = NULL
        newNode->prev = NULL;

        //STEP 7 START = newNode
        START = newNode;
        return;
      }
      // insert in between node 
      // step 8 locate potition for insertion
      node *current = START;
      while (current-> next !=NULL && current->next->noMhs < nim) {
        current = current -> next;
      }
      
      if (current-> next !=NULL && current->next->noMhs < noMhs)
      {
        cout << "\n duplicate roll number not allowed" << endl;
        return;
      }
      // step 9 insert between current and current->next
      {newNode->next = current->next;
      newNode->prev = current;

      if (current -> next !NULL){
        current next -> prev = newNode;
      }

      void hapus(){
        if (START == NULL)
        {
            cout << " \n. list is empty" << endl;
            return;
        }

        cout << "\nEnter the roll number of student whose record is to be delete: ";
        int rollno;
        cin >> rollno;
    }

        Node *current = START;
        // STEP 1 TRAVERSE THE LIST TO FIND THE NODE 
        while (current != NULL && current->noMhs != rollno){
        current = current->next;
        }

      if (current == NULL)
      {
        cout << "Record not found" << endl;
        return;
      }
      if (current == START){
        START = current -> next;
        if (START != NULL){
            START -> prev = NULL;
        }
      }else{
        current -> prev -> next = current -> next;
        if (current -> next != NULL){
            current -> next -> prev = current -> prev;
        }
        delete current;
    cout << "record with roll number " << rollno << "deleted" << endl;
    }
    void traverse (){
        if (START == NULL){
            cout << "\n List is empty" << endl;
            return;
        }
        //step 1 move to the last node
    node *currentNode = START;
    int i = 0;
    while (currentNode->next != NULL)
    {
        currentNode = currentNode->prev;
        i--;
        
    }
    //step 2 traverse backward
    cout << "\nRecords in descending order of roll number are:\n";
    while(currentNode != NULL)
    {
        cout << i + i << ". " << currentNode->noMhs << " " << endl;

        //step 3
        currentNode = currentNode->prev;
        i--;

    }
    }
    };
    
    void searchData()
    {
        if (START == NULL)
        {
            cout << "nList is empty" << endl;
            return;
        }

        int rollNo;
        cout << "\nEnter the roll number to search: ";
        cin >> rollNo;

        node *current = START;

        //step 1 traverse to find

        while (current != NULL && current->noMhs != rollNo)
            current = current->next;
        // step 2 output result
        if (current == NULL)
        {
            cout << " record no found\n";
        }
        else 
        {
            cout << " record no found\n";
            cout << " roll number:" << current -> noMhs << endl;
        }
    };
};

int main()
{
            DoubleLinkedList list;
            char choice;

            do 
            {
                
                 cout << "\nMenu: \n";
                 cout << "1. Add Record\n";
                 cout << "2. Delete Record\n";
                 cout << "3. View Ascending\n";
                 cout << "4. View Descending\n";
                 cout << "5. Search Record\n";
                 cout << "6. exit\n"; 
                 cout << "Enter The Number: ";
                cin >> choice;
                 switch (choice)
                 {
                    case '1':
                    list.addNode();
                    break;
                    case '2':
                    list.hapus();
                    break;
                    case '3':
                    list.traverse();
                    break;
                    case '4':
                    list.revTraverse();
                    break;
                    case '5':
                    list.searchData();
                    break;
                    case '6':
                    return 0;
                    default:
                        cout << "Invalid Option\n";        

    }
                    cout << "\n Press enter to continue...";
                    cin.ignore();
                    cin.get();
                    cout << endl;
                    system("clear");
    }  while (choice != '6');
};


