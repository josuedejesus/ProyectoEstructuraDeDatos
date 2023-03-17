/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionCrear_Lista;
    QAction *actionEditar_Lista;
    QAction *actionGuardar_Lista;
    QWidget *centralWidget;
    QLabel *label_titulo;
    QFrame *frame_menu;
    QLineEdit *txt_buscar;
    QLabel *label_buscar;
    QPushButton *butt_buscar;
    QComboBox *combo_eliminar;
    QLabel *label_eliminar;
    QPushButton *butt_eliminar;
    QLabel *label_insertar;
    QLineEdit *txt_insertar;
    QPushButton *butt_agregar;
    QRadioButton *rb_list;
    QRadioButton *rb_queue;
    QRadioButton *rb_stack;
    QComboBox *combo_opciones;
    QPushButton *butt_toolbar;
    QLabel *label_nombre;
    QLabel *label_nombre_archivo;
    QLabel *label_tamano_valor;
    QLabel *label_titulo_2;
    QGraphicsView *graphicsView;
    QLabel *label_titulo_4;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *layout_guia_2;
    QLabel *label_nombre_3;
    QLabel *label_nombre_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(800, 500);
        QFont font;
        font.setPointSize(10);
        MainWindowClass->setFont(font);
        MainWindowClass->setStyleSheet(QString::fromUtf8(""));
        actionCrear_Lista = new QAction(MainWindowClass);
        actionCrear_Lista->setObjectName("actionCrear_Lista");
        actionEditar_Lista = new QAction(MainWindowClass);
        actionEditar_Lista->setObjectName("actionEditar_Lista");
        actionGuardar_Lista = new QAction(MainWindowClass);
        actionGuardar_Lista->setObjectName("actionGuardar_Lista");
        actionGuardar_Lista->setCheckable(false);
        actionGuardar_Lista->setEnabled(true);
        actionGuardar_Lista->setVisible(true);
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 62, 80);"));
        label_titulo = new QLabel(centralWidget);
        label_titulo->setObjectName("label_titulo");
        label_titulo->setGeometry(QRect(20, 10, 211, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        label_titulo->setFont(font1);
        label_titulo->setStyleSheet(QString::fromUtf8("color: rgb(236, 240, 241);"));
        frame_menu = new QFrame(centralWidget);
        frame_menu->setObjectName("frame_menu");
        frame_menu->setGeometry(QRect(20, 129, 202, 341));
        QPalette palette;
        QBrush brush(QColor(85, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(52, 73, 94, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(222, 222, 222, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(94, 94, 94, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(126, 126, 126, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush8(QColor(85, 255, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        QBrush brush9(QColor(227, 227, 227, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        QBrush brush10(QColor(160, 160, 160, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush11(QColor(105, 105, 105, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        QBrush brush12(QColor(245, 245, 245, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        frame_menu->setPalette(palette);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        frame_menu->setFont(font2);
        frame_menu->setLayoutDirection(Qt::LeftToRight);
        frame_menu->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 73, 94);\n"
"color: rgb(85, 255, 255);"));
        frame_menu->setFrameShape(QFrame::Box);
        frame_menu->setFrameShadow(QFrame::Plain);
        txt_buscar = new QLineEdit(frame_menu);
        txt_buscar->setObjectName("txt_buscar");
        txt_buscar->setGeometry(QRect(11, 250, 181, 21));
        txt_buscar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        label_buscar = new QLabel(frame_menu);
        label_buscar->setObjectName("label_buscar");
        label_buscar->setGeometry(QRect(5, 228, 193, 20));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_buscar->sizePolicy().hasHeightForWidth());
        label_buscar->setSizePolicy(sizePolicy);
        label_buscar->setFont(font2);
        label_buscar->setStyleSheet(QString::fromUtf8("color: rgb(236, 240, 241);"));
        label_buscar->setAlignment(Qt::AlignCenter);
        butt_buscar = new QPushButton(frame_menu);
        butt_buscar->setObjectName("butt_buscar");
        butt_buscar->setGeometry(QRect(118, 277, 75, 24));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(butt_buscar->sizePolicy().hasHeightForWidth());
        butt_buscar->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setItalic(false);
        butt_buscar->setFont(font3);
        butt_buscar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(241, 196, 15);"));
        combo_eliminar = new QComboBox(frame_menu);
        combo_eliminar->setObjectName("combo_eliminar");
        combo_eliminar->setGeometry(QRect(11, 149, 181, 21));
        combo_eliminar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
""));
        label_eliminar = new QLabel(frame_menu);
        label_eliminar->setObjectName("label_eliminar");
        label_eliminar->setGeometry(QRect(5, 127, 193, 20));
        sizePolicy.setHeightForWidth(label_eliminar->sizePolicy().hasHeightForWidth());
        label_eliminar->setSizePolicy(sizePolicy);
        label_eliminar->setFont(font2);
        label_eliminar->setStyleSheet(QString::fromUtf8("color: rgb(236, 240, 241);"));
        label_eliminar->setAlignment(Qt::AlignCenter);
        butt_eliminar = new QPushButton(frame_menu);
        butt_eliminar->setObjectName("butt_eliminar");
        butt_eliminar->setGeometry(QRect(118, 176, 75, 24));
        sizePolicy1.setHeightForWidth(butt_eliminar->sizePolicy().hasHeightForWidth());
        butt_eliminar->setSizePolicy(sizePolicy1);
        butt_eliminar->setFont(font3);
        butt_eliminar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(231, 76, 60);"));
        label_insertar = new QLabel(frame_menu);
        label_insertar->setObjectName("label_insertar");
        label_insertar->setGeometry(QRect(5, 27, 193, 20));
        sizePolicy.setHeightForWidth(label_insertar->sizePolicy().hasHeightForWidth());
        label_insertar->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        font4.setStyleStrategy(QFont::PreferDefault);
        label_insertar->setFont(font4);
        label_insertar->setStyleSheet(QString::fromUtf8("color: rgb(236, 240, 241);"));
        label_insertar->setAlignment(Qt::AlignCenter);
        txt_insertar = new QLineEdit(frame_menu);
        txt_insertar->setObjectName("txt_insertar");
        txt_insertar->setGeometry(QRect(11, 49, 181, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txt_insertar->sizePolicy().hasHeightForWidth());
        txt_insertar->setSizePolicy(sizePolicy2);
        txt_insertar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        butt_agregar = new QPushButton(frame_menu);
        butt_agregar->setObjectName("butt_agregar");
        butt_agregar->setEnabled(true);
        butt_agregar->setGeometry(QRect(118, 76, 75, 24));
        sizePolicy1.setHeightForWidth(butt_agregar->sizePolicy().hasHeightForWidth());
        butt_agregar->setSizePolicy(sizePolicy1);
        butt_agregar->setBaseSize(QSize(0, 0));
        butt_agregar->setFont(font3);
        butt_agregar->setLayoutDirection(Qt::LeftToRight);
        butt_agregar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(46, 204, 113);"));
        rb_list = new QRadioButton(centralWidget);
        rb_list->setObjectName("rb_list");
        rb_list->setGeometry(QRect(320, 10, 51, 20));
        QFont font5;
        font5.setPointSize(9);
        font5.setBold(true);
        rb_list->setFont(font5);
        rb_list->setStyleSheet(QString::fromUtf8("color: rgb(236, 240, 241);"));
        rb_queue = new QRadioButton(centralWidget);
        rb_queue->setObjectName("rb_queue");
        rb_queue->setGeometry(QRect(370, 10, 61, 20));
        rb_queue->setFont(font5);
        rb_queue->setStyleSheet(QString::fromUtf8("color: rgb(236, 240, 241);"));
        rb_stack = new QRadioButton(centralWidget);
        rb_stack->setObjectName("rb_stack");
        rb_stack->setGeometry(QRect(430, 10, 51, 20));
        rb_stack->setFont(font5);
        rb_stack->setStyleSheet(QString::fromUtf8("color: rgb(236, 240, 241);"));
        combo_opciones = new QComboBox(centralWidget);
        combo_opciones->addItem(QString());
        combo_opciones->addItem(QString());
        combo_opciones->addItem(QString());
        combo_opciones->setObjectName("combo_opciones");
        combo_opciones->setGeometry(QRect(20, 33, 121, 21));
        combo_opciones->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"color: rgb(255, 255, 255);"));
        butt_toolbar = new QPushButton(centralWidget);
        butt_toolbar->setObjectName("butt_toolbar");
        butt_toolbar->setGeometry(QRect(20, 30, 760, 24));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setItalic(false);
        butt_toolbar->setFont(font6);
        butt_toolbar->setStyleSheet(QString::fromUtf8("color: rgb(236, 240, 241);\n"
"background-color: rgb(52, 73, 94);"));
        label_nombre = new QLabel(centralWidget);
        label_nombre->setObjectName("label_nombre");
        label_nombre->setGeometry(QRect(230, 90, 100, 16));
        QFont font7;
        font7.setPointSize(10);
        font7.setBold(false);
        label_nombre->setFont(font7);
        label_nombre->setStyleSheet(QString::fromUtf8("color: rgb(236, 240, 241);\n"
""));
        label_nombre_archivo = new QLabel(centralWidget);
        label_nombre_archivo->setObjectName("label_nombre_archivo");
        label_nombre_archivo->setGeometry(QRect(330, 90, 110, 16));
        label_nombre_archivo->setFont(font);
        label_nombre_archivo->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);\n"
""));
        label_tamano_valor = new QLabel(centralWidget);
        label_tamano_valor->setObjectName("label_tamano_valor");
        label_tamano_valor->setGeometry(QRect(744, 88, 36, 22));
        QFont font8;
        font8.setPointSize(15);
        font8.setBold(true);
        label_tamano_valor->setFont(font8);
        label_tamano_valor->setStyleSheet(QString::fromUtf8("color: rgb(220, 220, 220);\n"
"background-color: rgb(52, 73, 94);\n"
""));
        label_tamano_valor->setFrameShape(QFrame::Box);
        label_tamano_valor->setAlignment(Qt::AlignCenter);
        label_titulo_2 = new QLabel(centralWidget);
        label_titulo_2->setObjectName("label_titulo_2");
        label_titulo_2->setGeometry(QRect(20, 110, 202, 18));
        label_titulo_2->setFont(font1);
        label_titulo_2->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 62, 80);\n"
"color: rgb(85, 255, 255);"));
        label_titulo_2->setFrameShape(QFrame::Box);
        label_titulo_2->setAlignment(Qt::AlignCenter);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(230, 129, 550, 341));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 73, 94);\n"
"color: rgb(85, 255, 255);"));
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        label_titulo_4 = new QLabel(centralWidget);
        label_titulo_4->setObjectName("label_titulo_4");
        label_titulo_4->setGeometry(QRect(230, 110, 550, 18));
        label_titulo_4->setFont(font1);
        label_titulo_4->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 62, 80);\n"
"color: rgb(85, 255, 255);"));
        label_titulo_4->setFrameShape(QFrame::Box);
        label_titulo_4->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(700, 400, 61, 51));
        layout_guia_2 = new QVBoxLayout(verticalLayoutWidget_3);
        layout_guia_2->setSpacing(0);
        layout_guia_2->setContentsMargins(11, 11, 11, 11);
        layout_guia_2->setObjectName("layout_guia_2");
        layout_guia_2->setContentsMargins(0, 0, 0, 0);
        label_nombre_3 = new QLabel(verticalLayoutWidget_3);
        label_nombre_3->setObjectName("label_nombre_3");
        QFont font9;
        font9.setPointSize(11);
        font9.setBold(true);
        label_nombre_3->setFont(font9);
        label_nombre_3->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 73, 94);\n"
"color: rgb(46, 204, 113);"));

        layout_guia_2->addWidget(label_nombre_3);

        label_nombre_5 = new QLabel(verticalLayoutWidget_3);
        label_nombre_5->setObjectName("label_nombre_5");
        label_nombre_5->setFont(font9);
        label_nombre_5->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 73, 94);\n"
"color: rgb(231, 76, 60);"));

        layout_guia_2->addWidget(label_nombre_5);

        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName("statusBar");
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        actionCrear_Lista->setText(QCoreApplication::translate("MainWindowClass", "Crear Lista", nullptr));
        actionEditar_Lista->setText(QCoreApplication::translate("MainWindowClass", "Editar Lista (abrir)", nullptr));
        actionGuardar_Lista->setText(QCoreApplication::translate("MainWindowClass", "Guardar Lista", nullptr));
        label_titulo->setText(QCoreApplication::translate("MainWindowClass", "Pantalla Principal", nullptr));
        label_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        butt_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        label_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        butt_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        label_insertar->setText(QCoreApplication::translate("MainWindowClass", "Insertar", nullptr));
        butt_agregar->setText(QCoreApplication::translate("MainWindowClass", "Agregar", nullptr));
        rb_list->setText(QCoreApplication::translate("MainWindowClass", "Lista", nullptr));
        rb_queue->setText(QCoreApplication::translate("MainWindowClass", "Queue", nullptr));
        rb_stack->setText(QCoreApplication::translate("MainWindowClass", "Stack", nullptr));
        combo_opciones->setItemText(0, QCoreApplication::translate("MainWindowClass", "Crear Lista", nullptr));
        combo_opciones->setItemText(1, QCoreApplication::translate("MainWindowClass", "Editar Lista (abrir)", nullptr));
        combo_opciones->setItemText(2, QCoreApplication::translate("MainWindowClass", "Guardar Lista", nullptr));

        butt_toolbar->setText(QCoreApplication::translate("MainWindowClass", "Toolbar", nullptr));
        label_nombre->setText(QCoreApplication::translate("MainWindowClass", "Nombre de Lista:", nullptr));
        label_nombre_archivo->setText(QString());
        label_tamano_valor->setText(QString());
        label_titulo_2->setText(QCoreApplication::translate("MainWindowClass", "Menu", nullptr));
        label_titulo_4->setText(QCoreApplication::translate("MainWindowClass", "Graphics View", nullptr));
        label_nombre_3->setText(QCoreApplication::translate("MainWindowClass", "\342\226\240 Head", nullptr));
        label_nombre_5->setText(QCoreApplication::translate("MainWindowClass", "\342\226\240 Tail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
