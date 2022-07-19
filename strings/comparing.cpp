#include <QTextStream>

#define STR_EQUAL 0

int main(void) {

   QTextStream out(stdout);

   QString a { "Rain" };
   QString b { "rain" };
   QString c { "rain\n" };

   if (QString::compare(a, b) == STR_EQUAL) {
     out << "a, b are equal" << endl;
   } else {
     out << "a, b are not equal" << endl;
   }

   out << "In case insensitive comparison:" << endl;

   if (QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL) {
     out << "a, b are equal" << endl;
   } else {
     out << "a, b are not equal" << endl;
   }

   if (QString::compare(b, c) == STR_EQUAL) {
     out << "b, c are equal" << endl;
   } else {
     out << "b, c are not equal" << endl;
   }

   c.chop(1);

   out << "After removing the new line character" << endl;

   if (QString::compare(b, c) == STR_EQUAL) {
     out << "b, c are equal" << endl;
   } else {
     out << "b, c are not equal" << endl;
   }

   return 0;
}

/*
We will do case sensitive and case insensitive comparison with the compare method.

#define STR_EQUAL 0

For better code clarity, we define the STR_EQUAL constant.

QString a { "Rain" };
QString b { "rain" };
QString c { "rain\n" };

We are comparing these three strings.

if (QString::compare(a, b) == STR_EQUAL) {
    out << "a, b are equal" << endl;
} else {
    out << "a, b are not equal" << endl;
}

We compare a and b strings, they are not equal. They differ in the first character.

if (QString::compare(a, b, Qt::CaseInsensitive) == STR_EQUAL) {
    out << "a, b are equal" << endl;
} else {
    out << "a, b are not equal" << endl;
}

In case of case insensitive comparison, the strings are equal. The Qt::CaseInsensitive makes the comparison case insensitive.

c.chop(1);

The chop method removes the last character from the c string. Now the b and c strings are equal.

$ ./comparing
a, b are not equal
In case insensitive comparison:
a, b are equal
b, c are not equal
After removing the new line character
b, c are equal
*/
