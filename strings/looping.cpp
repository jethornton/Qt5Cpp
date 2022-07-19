#include <QTextStream>

int main(void) {

  QTextStream out(stdout);

  QString str { "There are many stars." };

  for (QChar qc: str) {
    out << qc << " ";
  }

  out << endl;

  for (QChar *it=str.begin(); it!=str.end(); ++it) {
    out << *it << " " ;
  }

  out << endl;

  for (int i = 0; i < str.size(); ++i) {
    out << str.at(i) << " ";
  }

  out << endl;

  return 0;
}

/*
We show three ways to go through a QString. We add a space character between the letters as we print them to the terminal.

for (QChar qc: str) {
  out << qc << " ";
}

We loop over the string with the range-based for loop.

for (QChar *it=str.begin(); it!=str.end(); ++it) {
  out << *it << " " ;
}

In this code, we use iterators to go through the string.

for (int i = 0; i < str.size(); ++i) {
  out << str.at(i) << " ";
}

We compute the size of the string and use the at method to access the string elements.

$ ./looping
T h e r e   a r e   m a n y   s t a r s .
T h e r e   a r e   m a n y   s t a r s .
T h e r e   a r e   m a n y   s t a r s .
*/
