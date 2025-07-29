/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *btnAgregar;
    QTableWidget *tablaPedidos;
    QPushButton *btnGuardar;
    QTextEdit *textTitulo;
    QPushButton *btnMostrar;
    QPushButton *btnModificar;
    QPushButton *btnEliminar;
    QPushButton *btnFacturacion;
    QPushButton *btnBuscarfactura;
    QTextEdit *text1;
    QTextEdit *text2;
    QTextEdit *txtDatos;
    QTextEdit *textNombre;
    QTextEdit *textDecula;
    QTextEdit *textDireccion;
    QLineEdit *editNombre;
    QLineEdit *editDireccion;
    QLineEdit *editCedula;
    QLabel *labelLogo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(706, 488);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(180, 190, 451, 22));
        btnAgregar = new QPushButton(centralwidget);
        btnAgregar->setObjectName("btnAgregar");
        btnAgregar->setGeometry(QRect(20, 220, 141, 24));
        tablaPedidos = new QTableWidget(centralwidget);
        if (tablaPedidos->columnCount() < 3)
            tablaPedidos->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaPedidos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaPedidos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaPedidos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tablaPedidos->setObjectName("tablaPedidos");
        tablaPedidos->setGeometry(QRect(20, 250, 551, 192));
        btnGuardar = new QPushButton(centralwidget);
        btnGuardar->setObjectName("btnGuardar");
        btnGuardar->setGeometry(QRect(590, 220, 111, 24));
        textTitulo = new QTextEdit(centralwidget);
        textTitulo->setObjectName("textTitulo");
        textTitulo->setGeometry(QRect(70, 0, 381, 31));
        btnMostrar = new QPushButton(centralwidget);
        btnMostrar->setObjectName("btnMostrar");
        btnMostrar->setGeometry(QRect(180, 220, 121, 24));
        btnModificar = new QPushButton(centralwidget);
        btnModificar->setObjectName("btnModificar");
        btnModificar->setGeometry(QRect(320, 220, 121, 24));
        btnEliminar = new QPushButton(centralwidget);
        btnEliminar->setObjectName("btnEliminar");
        btnEliminar->setGeometry(QRect(450, 220, 131, 24));
        btnFacturacion = new QPushButton(centralwidget);
        btnFacturacion->setObjectName("btnFacturacion");
        btnFacturacion->setGeometry(QRect(600, 380, 91, 24));
        btnBuscarfactura = new QPushButton(centralwidget);
        btnBuscarfactura->setObjectName("btnBuscarfactura");
        btnBuscarfactura->setGeometry(QRect(590, 410, 111, 24));
        text1 = new QTextEdit(centralwidget);
        text1->setObjectName("text1");
        text1->setGeometry(QRect(20, 160, 241, 21));
        text2 = new QTextEdit(centralwidget);
        text2->setObjectName("text2");
        text2->setGeometry(QRect(20, 190, 141, 21));
        txtDatos = new QTextEdit(centralwidget);
        txtDatos->setObjectName("txtDatos");
        txtDatos->setGeometry(QRect(20, 40, 121, 21));
        textNombre = new QTextEdit(centralwidget);
        textNombre->setObjectName("textNombre");
        textNombre->setGeometry(QRect(20, 70, 121, 21));
        textDecula = new QTextEdit(centralwidget);
        textDecula->setObjectName("textDecula");
        textDecula->setGeometry(QRect(20, 100, 121, 21));
        textDireccion = new QTextEdit(centralwidget);
        textDireccion->setObjectName("textDireccion");
        textDireccion->setGeometry(QRect(20, 130, 121, 21));
        editNombre = new QLineEdit(centralwidget);
        editNombre->setObjectName("editNombre");
        editNombre->setGeometry(QRect(160, 70, 171, 22));
        editDireccion = new QLineEdit(centralwidget);
        editDireccion->setObjectName("editDireccion");
        editDireccion->setGeometry(QRect(160, 130, 171, 22));
        editCedula = new QLineEdit(centralwidget);
        editCedula->setObjectName("editCedula");
        editCedula->setGeometry(QRect(160, 100, 171, 22));
        labelLogo = new QLabel(centralwidget);
        labelLogo->setObjectName("labelLogo");
        labelLogo->setGeometry(QRect(460, 10, 211, 161));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/imagen/imagen.jpg")));
        labelLogo->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 706, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "-Combo Estrella de Freddy (1 pizza peperoni con extra queso)  ---> $9,99", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "-Combo Tropical de Chica (1 pizza hawaiana + 1 refresco de naranja) ---> $8,50", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "-Combo Verde de Bonnie (1 pizza vegetariana + 1 batido de fresa) ---> $10.25", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "-Combo Explosivo de Foxy (1 pizza picante + 1 bebida energetica) ---> $11.75", nullptr));

        btnAgregar->setText(QCoreApplication::translate("MainWindow", "Agregar pedido", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaPedidos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "N\302\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaPedidos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Descripcion", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaPedidos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Precio", nullptr));
        btnGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar archivo", nullptr));
        textTitulo->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">BIENVENIDOS A PIZZERIA FREDDY'S FAZBEAR</span></p></body></html>", nullptr));
        btnMostrar->setText(QCoreApplication::translate("MainWindow", "Mostrar pedido", nullptr));
        btnModificar->setText(QCoreApplication::translate("MainWindow", "Modificar pedido", nullptr));
        btnEliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar pedido ", nullptr));
        btnFacturacion->setText(QCoreApplication::translate("MainWindow", "Facturacion", nullptr));
        btnBuscarfactura->setText(QCoreApplication::translate("MainWindow", "Buscar factura", nullptr));
        text1->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Con gusto, atenderemos tu pedido!</p></body></html>", nullptr));
        text2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Menu de productos:</p></body></html>", nullptr));
        txtDatos->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">Datos del cliente</span></p></body></html>", nullptr));
        textNombre->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Nombre:</p></body></html>", nullptr));
        textDecula->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Cedula o RUC:</p></body></html>", nullptr));
        textDireccion->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Direccion:</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        editNombre->setText(QString());
        editDireccion->setText(QString());
        editCedula->setText(QString());
        labelLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
