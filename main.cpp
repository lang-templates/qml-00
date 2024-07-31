//#include <QtCore>
//#include <QGuiApplication>
//#include <QQmlApplicationEngine>
#include "piechart.h"
#include <QtQuick/QQuickView>
#include <QGuiApplication>


int main(int argc, char *argv[])
{
#if false
    QGuiApplication app(argc, argv);

    qDebug() << "started!";

    QQmlApplicationEngine engine;
    //const QUrl url(QStringLiteral("qrc:/quick-00/main.qml"));
    const QUrl url(QStringLiteral("qrc:/QML/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
#else
    QGuiApplication app(argc, argv);

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.loadFromModule("Charts", "App");
    view.show();
    return QGuiApplication::exec();
#endif
}
