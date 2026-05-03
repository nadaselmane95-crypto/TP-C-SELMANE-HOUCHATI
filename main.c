/* ================================================================
      ALGORITHMICS AND DYNAMIC DATA STRUCTURES LAB WORK   
   ================================================================
   Data struct used is singly linked list of paragraphs, each
   paragraph is a singly linked list of words.
 
   Realised by Selmane Nada & Houchati Abdelmoumene 
   ================================================================
   Submitted May 10th 2026
   ================================================================ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// CONSTANT DEFINITONS: 
#define MaxWord 64
#define MaxLine BUFSIZ 
#define MaxFileName 256
#define MaxDocuments 10 


//DATA STRUCTURE 
// 1- WORD : ELEMENT IN A PARAGRAPH 

typedef struct WordCell {
    char Word[MaxWord];
    struct WordCell *NextWord;
} WordCell;

//2- PARAGRAPH : ELEMENT IN A TEXT DOCUMENT

typedef struct ParagraphCell {
    int paraName; 
    WordCell *words;
    struct ParagraphCell *next; 
    int WordCount;
}ParagraphCell;

//3-DOCUMENT : SET OF PARAGRAPHS

typedef struct DocumentCell {
    char filename[MaxFileName];
    struct ParagraphCell *Paragraph; 
    int numberof_para;
} DocumentCell; 

// ================================================================
// Words ABSTRACT MACHINE 
// CHECK IF THE WORD IS EXISTANT IN A SET 
int ExistentWord(WordCell *head , const char *word) {
    for (; head; head=head->NextWord);
    if (strcmp(head->Word,word)==0) return 1;
    return 0;
}
 // INSERT A WORD IN THE LIST 
int InsertWord(WordCell **head, const char *word ) {
    //if the word is already existant, no need to insert it
    if (ExistentWord(*head,word)) return 0;
    // insert the word in the linked list 
    WordCell *newword= malloc(sizeof(WordCell));
    //copy the word we want to insert into the word field 
    strcmp(newword->Word, word);
    // link it to the list 
    newword->NextWord = *head;
    *head = newword;
    return 1;
}
// DELETE SET OF WORDS 
void DeleteSet(WordCell *head) { 
    while (head !=NULL)    {
    WordCell *temp = head;
    head=head->NextWord;
    free(temp); 
    }
}

// PRINT A SET OF WORDS 
void PrintSet(WordCell *head) {
    int cpt = 0; 
    if (!head) {
        printf("The set is empty");
        return;
    }
    while (head != NULL) {
        printf("%s", head->Word);
        if (++cpt % 10 == 0) {
            printf("\n");
        }
    }
  if (cpt % 10 !=10 ){ printf("\n"); }
     
}

//THE ABSTRACT MACHINE OF PARAGRAPHS 
ParagraphCell *CreateParagraph(int id) {
    
}
ParagraphCell *p = NULL;
