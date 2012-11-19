#include <QDebug>
#include <QApplication>
#include <QDeclarativeView>
#include <QDeclarativeError>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QDeclarativeView view;
    view.setResizeMode(QDeclarativeView::SizeRootObjectToView);
    view.setSource(QUrl::fromLocalFile("discotiles.qml"));
    view.show();
    view.setGeometry(QApplication::desktop()->availableGeometry());

    return app.exec();
}

