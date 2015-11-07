#include "node1.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <time.h>
using namespace std;
using namespace main_savitch_5;

node* previouse_minimum(node*& head_ptr){
    node* cursor;
    node* minimum;
    node* prev;
    minimum=head_ptr;
   
    for(cursor=head_ptr; cursor != NULL; cursor=cursor->linker()){
      if(cursor->data() < minimum->data()){
         minimum=cursor;
      }
    } 
    cursor = head_ptr;  
    prev = cursor;
   while(cursor->linker() != minimum){
      cursor = cursor->linker();
      prev = cursor;

    }
    cout << prev->data() << endl;
    return prev;

}

void sort(node*& head_ptr, node*& marker_ptr){
   node* print_ptr;
   node* prev = previouse_minimum(head_ptr);
   node* temp;
   node* min; 
   marker_ptr = head_ptr;
   //cout << "before while in sort\n";
   while(marker_ptr->linker()->linker()!= NULL){
      if(marker_ptr == head_ptr){
         //cout << "hi\n";
         prev = min->linker();
         min->set_link(marker_ptr->linker());
         head_ptr = min;
         marker_ptr = head_ptr->linker();
//cout << marker_ptr->data() << endl;
      }
      else{
         //cout << "hello\n";
         prev->set_link(min->linker());
         min->set_link(marker_ptr->linker());
         temp->set_link(min->linker());
         temp = marker_ptr;
         marker_ptr = marker_ptr->linker();
         //cout << marker_ptr->data() << endl;
      }
   for(print_ptr = head_ptr; print_ptr !=NULL; print_ptr = print_ptr->linker()){
   cout <<  print_ptr->data() << " ";  
   }
   cout << endl;
   //cout << marker_ptr->data() << " \n";
   }

}

int myrand(int n) 
{
return (1 + rand() % ( 1000 - 1 +1 )  );
}

void print_linked_list(node*& head_ptr, node*& marker_ptr, node*& print_ptr, size_t n){
	for ( int i =1 ; i <= n ; i++){
	list_head_insert(head_ptr, myrand(n));
	marker_ptr = head_ptr;
    }	
    cout << "Unsorted List: \n";
    for(print_ptr = head_ptr; print_ptr !=NULL; print_ptr = print_ptr->linker()){
	cout <<  print_ptr->data() << " ";	
	}
cout << endl;
}

int main()
{
size_t n;
srand(time(NULL));

node *head_ptr;
node *marker_ptr;
node *print_ptr;

cout << "Please input a number\n";
cin >> n;

print_linked_list(head_ptr, marker_ptr, print_ptr, n);
sort(head_ptr, marker_ptr);
cout << endl;
//previouse_minimum(head_ptr);

return 0;
}
