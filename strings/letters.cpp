#include <QTextStream>

int main(void) {

  QTextStream out(stdout);

  int digits  = 0;
  int letters = 0;
  int spaces  = 0;
  int puncts  = 0;

  QString str { "7 white, 3 red roses." };

  for (QChar s : str) {

    if (s.isDigit()) {
      digits++;
    } else if (s.isLetter()) {
      letters++;
    } else if (s.isSpace()) {
      spaces++;
    } else if (s.isPunct()) {
      puncts++;
    }
  }

  out << QString("There are %1 characters").arg(str.count()) << endl;
  out << QString("There are %1 letters").arg(letters) << endl;
  out << QString("There are %1 digits").arg(digits) << endl;
  out << QString("There are %1 spaces").arg(spaces) << endl;
  out << QString("There are %1 punctuation characters").arg(puncts) << endl;

  return 0;
}

In the example we define a simple sentence. We count the number of digits, letters, spaces, and punctuation characters in the sentence.

int digits  = 0;
int letters = 0;
int spaces  = 0;
int puncts  = 0;

We define an integer variable for each character category.

QString str { "7 white, 3 red roses." };

This is the sentence to be examined.

for (QChar s : str) {

  if (s.isDigit()) {
    digits++;
  } else if (s.isLetter()) {
    letters++;
  } else if (s.isSpace()) {
    spaces++;
  } else if (s.isPunct()) {
    puncts++;
  }
}
/*
We use the for-range based loop to go through the QString. Each of the elements is a QChar. We use the methods of the QChar class to determine the categories of characters.

out << QString("There are %1 characters").arg(str.count()) << endl;
out << QString("There are %1 letters").arg(letters) << endl;
out << QString("There are %1 digits").arg(digits) << endl;
out << QString("There are %1 spaces").arg(spaces) << endl;
out << QString("There are %1 punctuation characters").arg(puncts) << endl;

Using the string interpolation, we print the numbers to the terminal.

$ ./letters
There are 21 characters
There are 13 letters
There are 2 digits
There are 4 spaces
There are 2 punctuation characters
*/
