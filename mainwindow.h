#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <vector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct Pedido {
    int numero;
    QString descripcion;
    double precio;
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAgregar_clicked();
    void on_btnGuardar_clicked();
    void on_btnMostrar_clicked();
    void on_btnModificar_clicked();
    void on_btnEliminar_clicked();
    void on_btnFacturacion_clicked();
    void on_btnBuscarfactura_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<Pedido> pedidos;

    void actualizarTabla();
    void guardarEnArchivo();
};

#endif
