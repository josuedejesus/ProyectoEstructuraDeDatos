#include "MainWindow.h"
#include <iostream>
#include <QMessageBox>
#include <QInputDialog>
#include <QDir>
#include <QFileDialog>
#include "List.h"
#include "Queue.h"
#include "Stack.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <QPainter>
#include <QGraphicsPixmapItem>
using namespace std;

string structure_name = "";
List* lista;
Queue* queue;
Stack* stack;
int structure = 0;
QString str_agregar = "";
QString str_eliminar = "";
QString str_structure = "";
bool listInitialzied = false;
bool isOpen = false;
enum STRUCTURE { LIST, QUEUE, STACK };

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    hideMenu();
    connect(ui.combo_opciones, SIGNAL(activated(int)), this, SLOT(enableActions(int)));
    setStyleSheet("QMessageBox{background-color : rgb(44, 62, 80)} QLabel{color : rgb(236, 240, 241);}");
}

MainWindow::~MainWindow()
{}

void MainWindow::on_rb_list_clicked() {
    structure = LIST;
    hideMenu();
    str_structure = "List";
    str_agregar = "Agregar";
    str_eliminar = "Eliminar";
    ui.label_titulo->setText(str_structure + " - Pantalla Principal");
    listInitialzied = false;
    paintEvent();
}

void MainWindow::on_rb_queue_clicked() {
    structure = QUEUE;
    hideMenu();
    str_structure = "Queue";
    str_agregar = "Enqueue";
    str_eliminar = "Dequeue";
    ui.label_titulo->setText(str_structure + " - Pantalla Principal");
    listInitialzied = false;
    paintEvent();
}

void MainWindow::on_rb_stack_clicked() {
    structure = STACK;
    hideMenu();
    str_structure = "Stack";
    str_agregar = "Push";
    str_eliminar = "Pop";
    ui.label_titulo->setText(str_structure + " - Pantalla Principal");
    listInitialzied = false;
    paintEvent();
}

void MainWindow::on_butt_toolbar_clicked() {
    if (!(ui.rb_list->isChecked() || ui.rb_queue->isChecked() || ui.rb_stack->isChecked())) {
        QMessageBox::warning(this, tr("Toolbar"), tr("Debe selecionar una estructura!"));
    }
    else {
        ui.butt_toolbar->setText(str_structure);
        ui.label_titulo->setText(str_structure + " - Toolbar");
        ui.combo_opciones->showPopup();
    }
}

void MainWindow::enableActions(int index) {
    switch (index) {
    case 0:       
        ui.label_titulo->setText(str_structure + " - Crear Lista");
        initializeList();
        listInitialzied = true;
        showMenu();
        paintEvent();
        break;
    case 1:
        ui.label_titulo->setText(str_structure + " - Editar Lista");
        openFile();
        break;
    case 2:
        ui.label_titulo->setText(str_structure + " - Guardar Lista");
        createFile();
        break;
    }
}

void MainWindow::on_butt_agregar_clicked() {
    string input = ui.txt_insertar->text().toStdString();
    if (!validateInput(input)) {
        QMessageBox::warning(this, tr("Crear Lista"), tr("Dato invalido!"));
    }
    else {
        switch (structure) {
        case LIST:
            lista->insertNode(stoi(input));
            break;
        case QUEUE:
            queue->enqueue(stoi(input));
            break;
        case STACK:
            stack->push(stoi(input));
            break;
        }
    }
    ui.txt_insertar->clear();
    paintEvent();
}

void MainWindow::on_butt_eliminar_clicked() {
    string valor = "";
    switch (structure) {
    case LIST:
        if (getListSize() == 0) {
            QMessageBox::warning(this, tr("Eliminar"), tr("La lista esta vacia!"));
        }
        else {
            int value = stoi(ui.combo_eliminar->currentText().toStdString());
            if (lista->deleteNode(value)) {
                paintEvent();
                QMessageBox::information(this, tr("Eliminar"), tr("Se elimino el elemento seleccionado!"));
            }
            else
                QMessageBox::warning(this, tr("Eliminar"), tr("No se pudo encontrar el elemento seleccionado!"));
        }
        break;
    case QUEUE:
        if (getListSize() == 0) {
            QMessageBox::warning(this, tr("Dequeue"), tr("La lista esta vacia!"));
        }
        else {
            valor = to_string(queue->dequeue());
            paintEvent();
            QMessageBox::information(this, tr("Dequeue"), tr(valor.c_str()));
        }
        break;
    case STACK:
        if (getListSize() == 0) {
            QMessageBox::warning(this, tr("Pop"), tr("La lista esta vacia!"));
        }
        else {
            valor = to_string(stack->pop());
            paintEvent();
            QMessageBox::information(this, tr("Pop"), tr(valor.c_str()));
        }
        break;
    }
}
void MainWindow::on_butt_buscar_clicked() {
    bool exists = false;
    string input = ui.txt_buscar->text().toStdString();
    if (!validateInput(input)) {
        QMessageBox::warning(this, tr("Buscar"), tr("Dato invalido!"));
    }
    else {        
        if (getListSize() == 0) {
            QMessageBox::warning(this, tr("Buscar"), tr("La lista esta vacia!"));
        }        
        else {
            switch (structure) {
            case LIST:
                exists = lista->exists(stoi(input));
                break;
            case QUEUE:
                exists = queue->exists(stoi(input));
                break;
            case STACK:
                exists = stack->exists(stoi(input));
                break;
            }
            if (exists)
                QMessageBox::information(this, tr("Buscar"), tr("El valor ingresado existe!"));
            else
                QMessageBox::warning(this, tr("Buscar"), tr("El valor ingresado no existe!"));
        }
    }
    ui.txt_buscar->clear();
}

void MainWindow::showMenu() {
    ui.label_insertar->show();
    ui.label_eliminar->show();
    ui.label_buscar->show();
    ui.label_insertar->setText(str_agregar);
    ui.label_eliminar->setText(str_eliminar);
    ui.label_buscar->setText("Buscar");
    ui.txt_insertar->show();
    if (structure == LIST)
        ui.combo_eliminar->show();
    ui.txt_buscar->show();
    ui.butt_agregar->show();
    ui.butt_eliminar->show();
    ui.butt_buscar->show();
    ui.butt_agregar->setText(str_agregar);
    ui.butt_eliminar->setText(str_eliminar);
    ui.butt_buscar->setText("Buscar");
    ui.butt_toolbar->setText(str_structure);
}

void MainWindow::hideMenu() {
    ui.label_tamano_valor->clear();
    ui.label_insertar->hide();
    ui.label_eliminar->hide();
    ui.txt_insertar->hide();
    ui.combo_eliminar->hide();
    ui.label_buscar->hide();
    ui.butt_buscar->hide();
    ui.txt_buscar->hide();
    ui.butt_agregar->hide();
    ui.butt_eliminar->hide();
    ui.label_nombre_archivo->setText("");
}

int MainWindow::getListSize() {
    int size = 0;
    switch (structure) {
    case LIST:
        size = lista->getSize();
        break;
    case QUEUE:
        size = queue->getSize();
        break;
    case STACK:
        size = stack->getSize();
        break;
    }
    return size;
}

void MainWindow::paintEvent() {
    QFont font;
    font.setPixelSize(20);
    font.setBold(true);
    QColor green;
    green.setRgb(46, 204, 113);
    QColor red;
    red.setRgb(231, 76, 60);
    QColor gray;
    gray.setRgb(149, 165, 166);
    QColor grayNull;
    grayNull.setRgb(127, 140, 141);
    QColor orange;
    orange.setRgb(241, 196, 15);
    int posY = 190;
    ui.combo_eliminar->clear();
    if (listInitialzied) {
        int size = getListSize();
        ui.label_tamano_valor->setText(QString::number(size));
        int sceneHeight = 362 + size * 100;
        QGraphicsScene* scene = new QGraphicsScene(230, 129, 550, sceneHeight, ui.graphicsView);
        ui.graphicsView->setScene(scene);
        QGraphicsRectItem* rectangle;
        QGraphicsRectItem* rectangleNull;
        QGraphicsTextItem* value_txt;
        QGraphicsLineItem* line;
        switch (structure) {
        case LIST:
            for (int i = 0; i < size; i++) {
                int numSize = static_cast<int>(to_string(lista->valueAt(i)).length());
                int posX = 506 - numSize * 16 / 2;
                ui.combo_eliminar->addItem(QString::number(lista->valueAt(i)));
                rectangle = new QGraphicsRectItem(470, posY, 90, 40);
                value_txt = new QGraphicsTextItem(QString::number(lista->valueAt(i)));
                line = new QGraphicsLineItem(535, posY, 535, posY + 40);
                value_txt->setPos(posX, posY + 2);
                value_txt->setDefaultTextColor(Qt::white);
                value_txt->setFont(font);
                if (i == 0)
                    rectangle->setBrush(green);
                else if (i == size - 1)
                    rectangle->setBrush(red);
                else
                    rectangle->setBrush(gray);
                scene->addItem(rectangle);
                scene->addItem(value_txt);
                scene->addItem(line);
                drawArrow(scene, posY);
                posY = posY + 100;
            }
            break;
        case QUEUE:
            for (int i = 0; i < size; i++) {
                int numSize = static_cast<int>(to_string(queue->print(i)).length());
                int posX = 506 - numSize * 16 / 2;
                ui.combo_eliminar->addItem(QString::number(queue->print(i)));
                rectangle = new QGraphicsRectItem(470, posY, 90, 40);
                value_txt = new QGraphicsTextItem(QString::number(queue->print(i)));
                line = new QGraphicsLineItem(535, posY, 535, posY + 40);
                value_txt->setPos(posX, posY + 2);
                value_txt->setDefaultTextColor(Qt::white);
                value_txt->setFont(font);
                if (i == 0)
                    rectangle->setBrush(green);
                else if (i == size - 1)
                    rectangle->setBrush(red);
                else
                    rectangle->setBrush(gray);
                scene->addItem(rectangle);
                scene->addItem(value_txt);
                scene->addItem(line);
                drawArrow(scene, posY);
                posY = posY + 100;
            }
            break;
        case STACK:
            for (int i = 0; i < size; i++) {
                int numSize = static_cast<int>(to_string(stack->print(i)).length());
                int posX = 506 - numSize * 16 / 2;
                rectangle = new QGraphicsRectItem(470, posY, 90, 40);
                value_txt = new QGraphicsTextItem(QString::number(stack->print(i)));
                line = new QGraphicsLineItem(535, posY, 535, posY + 40);
                value_txt->setPos(posX, posY + 2);
                value_txt->setDefaultTextColor(Qt::white);
                value_txt->setFont(font);
                if (i == size - 1)
                    rectangle->setBrush(green);
                else if (i == 0)
                    rectangle->setBrush(red);
                else
                    rectangle->setBrush(gray);
                scene->addItem(rectangle);
                scene->addItem(value_txt);
                scene->addItem(line);
                drawArrow(scene, posY);
                posY = posY + 100;
            }
            break;
        }
        rectangleNull = new QGraphicsRectItem(470, posY, 90, 40);
        rectangleNull->setBrush(grayNull);
        value_txt = new QGraphicsTextItem("NULL");
        value_txt->setPos(485, posY + 2);
        value_txt->setDefaultTextColor(Qt::white);
        value_txt->setFont(font);
        scene->addItem(rectangleNull);
        scene->addItem(value_txt);
    }
    else {
        QGraphicsScene* scene = new QGraphicsScene(230, 129, 550, 341, ui.graphicsView);
        ui.graphicsView->setScene(scene);
        ui.combo_eliminar->clear();
    }
}

void MainWindow::drawArrow(QGraphicsScene* scene, int posY) {
    QGraphicsLineItem* arrowLine;
    QGraphicsLineItem* arrowLine2;
    QGraphicsLineItem* arrowLine3;
    QGraphicsLineItem* arrowLine4;
    QPolygonF* arrowTipPolygon;
    QColor orange;
    orange.setRgb(241, 196, 15);
    arrowLine = new QGraphicsLineItem(547, posY + 42, 547, posY + 60);
    arrowLine2 = new QGraphicsLineItem(516, posY + 60, 547, posY + 60);
    arrowLine3 = new QGraphicsLineItem(515, posY + 60, 515, posY + 87);
    arrowLine4 = new QGraphicsLineItem(514, posY + 86, 516, posY + 86);
    qreal posY1 = posY + 83;
    qreal posY2 = posY + 92;
    arrowTipPolygon = new QPolygonF();
    arrowTipPolygon->append(QPointF(509, posY1));
    arrowTipPolygon->append(QPointF(515, posY1));
    arrowTipPolygon->append(QPointF(521, posY1));
    arrowTipPolygon->append(QPointF(515, posY2));
    arrowLine->setPen(QPen(Qt::white, 4));
    arrowLine2->setPen(QPen(Qt::white, 4));
    arrowLine3->setPen(QPen(Qt::white, 4));
    arrowLine4->setPen(QPen(Qt::white, 6));
    scene->addItem(arrowLine);
    scene->addItem(arrowLine2);
    scene->addItem(arrowLine3);
    scene->addItem(arrowLine4);
    scene->addPolygon(*arrowTipPolygon)->setPen(QPen(Qt::white, 3));
    scene->addItem(arrowLine4);
}

void MainWindow::initializeList() {
    switch (structure) {
        case LIST:
            lista = new List();
            break;
        case QUEUE:
            queue = new Queue();
            break;
        case STACK:
            stack = new Stack();
            break;
    }
}

void MainWindow::deleteList() {
    listInitialzied = false;
    switch (structure) {
    case LIST:
        delete lista;
        break;
    case QUEUE:
        delete queue;
        break;
    case STACK:
        delete stack;
        break;
    }
}

bool MainWindow::validateInput(string input) {
    bool isInteger = true;
    int inputNum;
    stringstream ss(input);
    if (!(ss >> inputNum) || !(ss >> std::ws).eof()) {
        isInteger = false;
    }
    return isInteger;
}

void MainWindow::createFile() {
    if (!listInitialzied || getListSize() == 0) {
        QMessageBox::warning(this, tr("Guardar"), tr("No existe lista para guardar!"));
    }
    else
    {
        QString existing_file = ui.label_nombre_archivo->text();
        QString file_name;
        if (existing_file.isEmpty())
            file_name = QFileDialog::getSaveFileName(this, "Guardar Lista", " ", "All Files (*.csv)");
        else
            file_name = QFileDialog::getSaveFileName(this, "Guardar Lista", existing_file, "All Files (*.csv)");
        if (!file_name.isEmpty() && !file_name.isNull()) {
            ofstream outFile(file_name.toStdString());
            while (outFile.is_open()) {
                switch (structure) {
                case LIST:
                    for (int i = 0; i < lista->getSize(); i++) {
                        outFile << lista->valueAt(i) << "\n";
                    }
                    initializeList();
                    break;
                case QUEUE:
                    for (int i = 0; i < queue->getSize(); i++) {
                        outFile << queue->print(i) << "\n";
                    }
                    initializeList();
                    break;
                case STACK:
                    for (int i = stack->getSize() - 1; i >= 0; i--) {
                        outFile << stack->print(i) << "\n";
                    }
                    initializeList();
                    break;
                }
                outFile.close();
            }
            hideMenu();
            deleteList();
            ui.label_titulo->setText(str_structure + " - Pantalla Principal");
            listInitialzied = false;
            isOpen = false;
            paintEvent();
            QMessageBox::information(this, tr("Guardar"), tr("Lista guardada exitosamente!"));
        }
    }
}

void MainWindow::openFile() {
    if (!isOpen)
        initializeList();
    string data;
    QString file_name = QFileDialog::getOpenFileName(this, "Abrir Lista", " ", "All Files (*.csv)");
    if (!file_name.isEmpty() && !file_name.isNull()) {
        deleteList();
        initializeList();
        ifstream inFile;
        listInitialzied = true;
        ui.label_nombre_archivo->setText(file_name.section('/', -1));
        inFile.open(file_name.toStdString());
        while (getline(inFile, data))
        {
            switch (structure) {
            case LIST:
                lista->insertNode(stoi(data));
                break;
            case QUEUE:
                queue->enqueue(stoi(data));
                break;
            case STACK:
                stack->push(stoi(data));
                break;
            }
        }
        inFile.close();
        showMenu();
        paintEvent();
        listInitialzied = true;
        isOpen = true;
    }
    else {
        if (!isOpen) {
            listInitialzied = false;
        }
        else {
            listInitialzied = true;
        }
    }
}

