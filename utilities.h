#ifndef UTILITIES_H
#define UTILITIES_H
#include <QTextCodec>
#include <QDebug>
#include <QTextStream>
#include <iomanip>
#include <sstream>
void display_text(QString text);


QString ReadStringFromByteArray(int start_pos, QByteArray &content);
int ReadIntegerFromByteArray(int start_pos, QByteArray &content);
short ReadShortFromByteArray(int start_pos, QByteArray &content);
QByteArray ReadSubByteArray(QByteArray &content, int &addr, int size);
QByteArray ReadStringSubByteArray(QByteArray &content, int &addr);
QString ConvertBytesToString(QByteArray Bytes);
#endif // UTILITIES_H
