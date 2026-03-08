// (*CBook).BookID คือ การเข้าถึงสมาชิกของ BookID ของstruct Books โดยดึงค่า BookID จากตำแหน่งที่ Pointer CBook ชี้อยู่
// CBook->BookTitle คือ การดึงค่า BookTitle จากตำแหน่งที่ Pointer CBook ชี้อยู่ โดยใช้เครื่องหมายลูกศร ซึ่งเป็นรูปแบบย่อหรือวิธีลัด
#include <stdio.h> 
#include <stdlib.h> 
struct Books{ 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook;

void DisplayData(struct Books *CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d",&ComputerBook.BookID); 
    printf("Enter Book Title :");   
    scanf("%s",ComputerBook.BookTitle); 
    DisplayData(&ComputerBook);
    return 0; 
} 
void DisplayData(struct Books *CBook){ 
    printf("Book ID : %d \n",(*CBook).BookID); 
    printf("Book Title : %s \n",CBook->BookTitle); 
}


