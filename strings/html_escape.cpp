/* Qt5 has a toHtmlEscaped method, which converts a plain text string to an HTML string with HTML metacharacters <, >, &, and " replaced by HTML named entities.

$ cat cprog.c
#include <stdio.h>

int main(void) {

    for (int i=1; i<=10; i++) {
      
        printf("Bottle %d\n", i);
    }
}

This C program includes HTML metacharacters.
html_escape.cpp
*/
#include <QTextStream>
#include <QFile>

int main(void) {

    QTextStream out(stdout);

    QFile file("cprog.c");

    if (!file.open(QIODevice::ReadOnly)) {

        qWarning("Cannot open file for reading");
        return 1;
    }

    QTextStream in(&file);

    QString allText = in.readAll();
    out << allText.toHtmlEscaped() << endl;

    file.close();

    return 0;
}
/*
The example reads a C program and replaced the metacharacters with their named entities.

$ ./html_escape
#include &lt;stdio.h&gt;

int main(void) {

    for (int i=1; i&lt;=10; i++) {
        printf(&quot;Bottle %d\n&quot;, i);
    }
}
*/
