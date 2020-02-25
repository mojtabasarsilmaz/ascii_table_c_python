print()
additional_information = ("NUL (null character)",
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
                          "DEL")
hashor = "+"+("-"*223)+"+"
title = "+"+("-"*78)+" ASCII CODES (American Standard Code for Information Interchange) "+("-"*79)+"+"
print(f'{hashor}\n{title}\n{hashor}')
print("-"*57, "-"*55, "-"*55, "-"*55)
for j in range(4):
    print("DEC\t OCT\t HEX\tChar\t\t\t\t| ",end="")
print("\n"+"-"*57, "-"*55, "-"*55, "-"*55)
for i in range(33):
    print("%-8d%-8x%-8o%-32s%s "% (i, i, i, additional_information[i], "|"), end="");
    print("%-8d%-8x%-8o%-30c%s "% (i+33, i+33, i+33, i+33, "|"), end="");
    print("%-8d%-8x%-8o%-30c%s "% (i+66, i+66, i+66, i+66, "|"), end="");
    if(i+99) < 127:
        print("%-8d%-8x%-8o%-30c%s"% (i+99, i+99, i+99, i+99, "|"));
    elif(i+99) == 127:
        print("%-8d%-8x%-8o%-30s%s"% (i+99, i+99, i+99, additional_information[33], "|")); 
    else:
        print("%-54s%s "% (" ", "|"));
print("-"*56, "-"*55, "-"*55, "-"*55)   
