#include <stdio.h>
#include <stdlib.h>
struct Books
{
    int BookID;
    char BookTitle[50];
} ComputerBook;
void DisplayData(struct Books *CBook);

int main()
{
    printf("Enter Book ID :");
    scanf("%d", &ComputerBook.BookID);
    printf("Enter Book Title :");
    scanf("%s", ComputerBook.BookTitle);
    DisplayData(&ComputerBook); // ส่งตำแหน่งที่อยู่ข้อมูลไปยังฟังก์ชัน DisplayData
    return 0;
}
void DisplayData(struct Books *CBook)
{
    printf("Book ID : %d \n", (*CBook).BookID);
    printf("Book Title : %s \n", CBook->BookTitle);
}
/*
(*CBook).BookID คือ การเข้าถึงค่าของตัวแปร BookID ที่ถูกชี้โดยพอยน์เตอร์ CBook  โดยใช้ .
* จะทำการเข้าไปดึงตัวข้อมูลออกมาจากหน่วยความจำที่พอยน์เตอร์ชี้อยู่ก่อนใช้ . เพื่อเข้าถึงข้อมูล

CBook->BookTitle คือ การเข้าถึงค่าของตัวแปร BookTitle ที่ถูกชี้โดยพอยน์เตอร์ CBook โดยใช้ ->
และใช้ -> เพื่อเข้าถึงข้อมูลแทน * และ .
*/