#include <QCoreApplication>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout<<"Hello"<<endl;

    QCoreApplication a(argc, argv);

    return a.exec();
}
