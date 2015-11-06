#include "node1.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <time.h>
using namespace std;
using namespace main_savitch_5;

// Uses special case code for the head end


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

return 0;
}
