#include <QTextStream>

int main(void) {

   QTextStream out(stdout);

   QString str = { "The night train" };

   out << str.right(5) << endl;
   out << str.left(9) << endl;
   out << str.mid(4, 5) << endl;

   QString str2("The big apple");
   QStringRef sub(&str2, 0, 7);

   out << sub.toString() << endl;

   return 0;
}

/*
 We will use all three methods to find some substrings of a given string.

out << str.right(5) << endl;

With the right method, we get five rightmost characters of the str string. The 'train' is printed.

out << str.left(9) << endl;

With the left method, we get nine leftmost characters of the str string. The 'The night' is printed.

out << str.mid(4, 5) << endl;

With the mid method, we get five characters starting from the 4th position. The 'night' is printed.

QString str2("The big apple");
QStringRef sub(&str2, 0, 7);

The QStringRef class is a read-only version of a QString. Here we create a QStringRef of a portion of the str2 string. The second parameter is the position and the third is the length of the substring.

$ ./substrings
train
The night
night
The big


*/
