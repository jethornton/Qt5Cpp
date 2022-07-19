#include <QTextStream>

int main(void) {

   QTextStream out(stdout);

   QString str { "Lovely" };
   str.append(" season");

   out << str << endl;

   str.remove(10, 3);
   out << str << endl;

   str.replace(7, 3, "girl");
   out << str << endl;

   str.clear();

   if (str.isEmpty()) {
     out << "The string is empty" << endl;
   }

   return 0;
}
/*
We describe four methods that modify a string in-place.

str.append(" season");

The append method adds a new string at the end of the string.

str.remove(10, 3);

The remove method removes 3 characters from the string, starting from position 10.

str.replace(7, 3, "girl");

The replace method replaces 3 characters beginning at position 7 with the specified string.

str.clear();

The clear method clears the string.

$ ./modify
Lovely season
Lovely sea
Lovely girl
The string is empty
*/
