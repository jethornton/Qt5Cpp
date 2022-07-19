#include <QTextStream>

int main(void) {

  QTextStream out(stdout);

  QString s1 { "12" };
  QString s2 { "15" };
  QString s3, s4;

  out << s1.toInt() + s2.toInt() << endl;

  int n1 = 30;
  int n2 = 40;

  out << s3.setNum(n1) + s4.setNum(n2) << endl;

  return 0;
}
/*
In the example we convert two strings to integers and add them. Then we convert two integers to strings and concatenate them.

out << s1.toInt() + s2.toInt() << endl;

The toInt method converts a string to an integer. We add two numbers converted froms strings.

out << s3.setNum(n1) + s4.setNum(n2) << endl;

In this case the setNum method converts an integer to a string. We concatenate two strings.

$ ./converting
27
3040
*/
