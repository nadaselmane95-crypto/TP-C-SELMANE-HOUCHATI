#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//The Abstract machine of linked lists
// 1- The linked lists definitions
typedef char elementtype ; 

typedef struct Cell {
    elementtype value;
    struct Cell *addr ;
} Cell; 

typedef Cell *pointer;

//LLC abstract machine operations : 

//Allocate : its role is to allocate the pointer in the memory
pointer Allocate() {
    pointer p = (pointer)malloc(sizeof(Cell));
    if (p==NULL) {
        printf("memory allocation failed");
    }
    p->value =0;
    p->addr = NULL;
    return p;  
}
// free pointer : its role is to deallocate the cell from the memory 
void free_LL_Cell(pointer p) {
    free(p);
}

// ASS_VAL is to assign a certain value v to the val field of the cell
void Ass_val(pointer p, elementtype v) {
    p->value = v;
}

//ASS_ADR is to link the cells p to q by assigning q to the address field of p
void Ass_adr(pointer p, pointer q) {
    p->addr = q;
}

//Value p returns the value field of the cell p
elementtype Value(pointer p) {
    return p->value;
}

//Adr p returns the address firld of the next cell linked to p 
pointer Next(pointer p) {
    return p->addr;
};

//DEFINITION OF THE TEXT DOCUMENTS LLC STRUCTURES 
/* */

