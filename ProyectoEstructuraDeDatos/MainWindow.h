#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
using namespace std;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void hideMenu();
    void showMenu();
    void initializeList();
    void deleteList();
    void createFile();
    void openFile();
    bool validateInput(string);
    int getListSize();
    virtual void paintEvent();
    void drawArrow(QGraphicsScene*, int);

private slots:
    void on_butt_toolbar_clicked();
    void on_butt_agregar_clicked();
    void on_butt_buscar_clicked();
    void on_butt_eliminar_clicked();
    void on_rb_list_clicked();
    void on_rb_queue_clicked();
    void on_rb_stack_clicked();
    void enableActions(int);
    
private:
    Ui::MainWindowClass ui;
};
