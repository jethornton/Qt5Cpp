Basic Qt5 C++
=============

You must create a project file with
::

	qmake -project

You must add any Qt5 libraries to the end of the .pro file like
::

	QT += core gui

After adding and editing the .pro file run the following and you should have an
executable file.
::

	qmake
	make 
