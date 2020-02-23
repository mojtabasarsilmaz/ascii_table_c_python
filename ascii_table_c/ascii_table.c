#include <stdio.h>

int main(){
    printf("\n");
    printf("+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("+---------------------------------------------------------------------- ASCII CODES (American Standard Code for Information Interchange) --------------------------------------------------------------+\n");
    printf("+------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+\n");
    int i;
    char *ascii_char[34] = {"NUL (null character)", 
                           "SOH (start of heading)",
                           "STX (start of text)",
                           "ETX (end of text)",
                           "EOT (end of transmission)",
                           "ENQ (enquiry)",
                           "ACK (acknowledge)",
                           "BEL (bell)",
                           "BS  (backspace)",
                           "HT  (horizontal tab)",
                           "LF  (new line)",
                           "VT  (vertical tab)",
                           "FF  (form feed)",
                           "CR  (carriage ret)",
                           "SO  (shift out)",
                           "SI  (shift in)",
                           "DLE (data link escape)",
                           "DC1 (device control 1)",
                           "DC2 (device control 2)",
                           "DC3 (device control 3)",
                           "DC4 (device control 4)",
                           "NAK (negative ack.)",
                           "SYN (synchronous idle)",
                           "ETB (end of trans. blk)",
                           "CAN (cancel)",
                           "EM  (end of medium)",
                           "SUB (substitute)",
                           "ESC (escape)",
                           "FS  (file separator)",
                           "GS  (group separator)",
                           "RS  (record separator)",
                           "US  (unit separator)",
                           "SPACE",
                           "DEL"};
    printf("----------------------------------------------------"); 
    printf("---- ----------------------------------------------- "); 
    printf("----------------------------------------------- -----"); 
    printf("------------------------------------------\n");  
    printf("%-8s%-8s%-8s%-31s%s ", "Dec", "Hx", "Oct", "Char", "|");
    printf("%-8s%-8s%-8s%-22s%s ", "Dec", "Hx", "Oct", "Char", "|");
    printf("%-8s%-8s%-8s%-22s%s ", "Dec", "Hx", "Oct", "Char", "|");
    printf("%-8s%-8s%-8s%-22s%s\n", "Dec", "Hx", "Oct", "Char", "|");
    printf("----------------------------------------------------"); 
    printf("---- ----------------------------------------------- "); 
    printf("----------------------------------------------- -----"); 
    printf("------------------------------------------\n"); 
    
    for(i=0; i<=127; i++){
        if (i==33){
            break;
        }
        printf("%-8d%-8x%-8o%-31s%s ", i, i, i, ascii_char[i], "|");
        printf("%-8d%-8x%-8o%-22c%s ", i+33, i+33, i+33, i+33, "|");
        printf("%-8d%-8x%-8o%-22c%s ", i+66, i+66, i+66, i+66, "|");
        if ((i+99) < 127){
            printf("%-8d%-8x%-8o%-22c%s\n", i+99, i+99, i+99, i+99, "|");
        }else if((i+99) == 127){
            printf("%-8d%-8x%-8o%-22s%s\n", i+99, i+99, i+99, ascii_char[33], "|"); 
        }else{
            printf("%-46s%s \n", " ", "|");
        }
    }
    printf("---------------------------------------------------"); 
    printf("---- ----------------------------------------------- "); 
    printf("----------------------------------------------- -----"); 
    printf("------------------------------------------\n\n");  
    return 0;
}
