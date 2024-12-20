#include "minidraw.h"
#include <QtWidgets/QApplication>


int main(int argc, char* argv[])
{
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);

    QApplication a(argc, argv);
    MiniDraw w;
    w.resize(1200,1008);
    w.setWindowTitle("Simulate");
    w.setWindowIcon(QIcon("../icon/title.png"));
    w.show();
    return a.exec();
}
