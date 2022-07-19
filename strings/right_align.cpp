#include <QTextStream>

int main(void) {

   QTextStream out(stdout);

   QString field1 { "Name: " }; 
   QString field2 { "Occupation: " }; 
   QString field3 { "Residence: " }; 
   QString field4 { "Marital status: " }; 

   int width = field4.size();

   out << field1.rightJustified(width, ' ') << "Robert\n";
   out << field2.rightJustified(width, ' ') << "programmer\n";
   out << field3.rightJustified(width, ' ') << "New York\n";
   out << field4.rightJustified(width, ' ') << "single\n";

   return 0;
}
/*
The example aligns field strings to the right.

int width = field4.size();

We calculate the size of the widest string.

out << field1.rightJustified(width, ' ') << "Robert\n";

The rightJustified method returns a string having width characters. If the string is shorter, the rest is filled with the provided character. In our case, it is a space character.

$ ./right_align
          Name: Robert
    Occupation: programmer
     Residence: New York
Marital status: single
*/
