#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QInputDialog>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    // Fondo
    this->setStyleSheet("background-color: #f5e6d3;");
    
    // Estilo para botones
    QString estiloBotones = "QPushButton {"
                            "  background-color: #D8B7DD;"
                            "  color: black;"
                            "  font-weight: bold;"
                            "  border-radius: 6px;"
                            "  padding: 6px;"
                            "} "
                            "QPushButton:hover {"
                            "  background-color: #cda3d9;"
                            "}";

    // Aplica estilo a todos los botones
    ui->btnAgregar->setStyleSheet(estiloBotones);
    ui->btnGuardar->setStyleSheet(estiloBotones);
    ui->btnModificar->setStyleSheet(estiloBotones);
    ui->btnEliminar->setStyleSheet(estiloBotones);
    ui->btnFacturacion->setStyleSheet(estiloBotones);
    ui->btnBuscarfactura->setStyleSheet(estiloBotones);
    ui->btnMostrar->setStyleSheet(estiloBotones);

    // Campos de entrada
    ui->editNombre->setStyleSheet("background-color: #EEEDF7;");
    ui->editCedula->setStyleSheet("background-color: #EEEDF7;");
    ui->editDireccion->setStyleSheet("background-color: #EEEDF7;");

    // Etiquetas de nombre, cédula, dirección
    ui->textNombre->setStyleSheet("background-color: #ACC4E3;");
    ui->textDecula->setStyleSheet("background-color: #ACC4E3;");
    ui->textDireccion->setStyleSheet("background-color: #ACC4E3;");
    ui->comboBox->setStyleSheet("background-color: #EEEDF7; padding: 4px;");
    ui->tablaPedidos->setStyleSheet("background-color: #EEEDF7;");
    ui->tablaPedidos->setColumnCount(3);
    ui->tablaPedidos->setHorizontalHeaderLabels(QStringList() << "N°" << "Descripción" << "Precio");

    // Ajuste de tamaño de columnas
    ui->tablaPedidos->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    ui->tablaPedidos->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->tablaPedidos->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeToContents);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_btnAgregar_clicked() {
    QString combo = ui->comboBox->currentText();
    double precio = 0;
    QString descripcionLarga;

    if (combo.contains("Freddy")) {
        precio = 9.99;
        descripcionLarga = "Combo Estrella de Freddy (1 pizza de peperoni con extra queso)";
    }
    else if (combo.contains("Chica")) {
        precio = 8.50;
        descripcionLarga = "Combo Tropical de Chica (1 pizza hawaiana + 1 refresco de naranja)";
    }
    else if (combo.contains("Bonnie")) {
        precio = 10.25;
        descripcionLarga = "Combo Verde de Bonnie (1 pizza vegetariana + 1 batido de fresa)";
    }
    else if (combo.contains("Foxy")) {
        precio = 11.75;
        descripcionLarga = "Combo Explosivo de Foxy (1 pizza picante + 1 bebida energetica)";
    }

    Pedido p;
    p.numero = pedidos.empty() ? 1 : pedidos.back().numero + 1;
    p.descripcion = descripcionLarga;
    p.precio = precio;

    pedidos.push_back(p);
    actualizarTabla();
}

void MainWindow::actualizarTabla() {
    ui->tablaPedidos->setRowCount(static_cast<int>(pedidos.size()));
    for (std::size_t i = 0; i < pedidos.size(); ++i) {
        ui->tablaPedidos->setItem(static_cast<int>(i), 0, new QTableWidgetItem(QString::number(pedidos[i].numero)));
        ui->tablaPedidos->setItem(static_cast<int>(i), 1, new QTableWidgetItem(pedidos[i].descripcion));
        ui->tablaPedidos->setItem(static_cast<int>(i), 2, new QTableWidgetItem(QString::number(pedidos[i].precio)));
    }
}

void MainWindow::on_btnGuardar_clicked() {
    guardarEnArchivo();
    QMessageBox::information(this, "Guardado", "Pedidos guardados correctamente.");
}

void MainWindow::guardarEnArchivo() {
    QFile archivo("C:/Users/Elizabeth/Desktop/PROGRAMACION/pedidos.txt");
    if (archivo.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&archivo);
        for (const auto& p : pedidos) {
            out << QString::number(p.numero) << ". " << p.descripcion << "\n";
        }
        archivo.close();
    }
}

void MainWindow::on_btnMostrar_clicked() {
    ui->tablaPedidos->clearContents();
    actualizarTabla();
    if (pedidos.empty()) {
        QMessageBox::warning(this, "Atención", "No hay pedidos para mostrar.");
        return;
    }
}

void MainWindow::on_btnModificar_clicked() {
    if (pedidos.empty()) {
        QMessageBox::warning(this, "Advertencia", "No hay productos para modificar.");
        return;
    }

    bool ok;
    int num = QInputDialog::getInt(this, "Modificar Pedido", "Número del pedido a modificar:", 1, 1, static_cast<int>(pedidos.size()), 1, &ok);
    if (!ok) return;

    QStringList opciones;
    opciones << "Combo Estrella de Freddy ($9.99)"
             << "Combo Tropical de Chica ($8.50)"
             << "Combo Verde de Bonnie ($10.25)"
             << "Combo Explosivo de Foxy ($11.75)";

    QString nuevoCombo = QInputDialog::getItem(this, "Nuevo Combo", "Selecciona el nuevo combo:", opciones, 0, false, &ok);
    if (!ok) return;

    Pedido &p = pedidos[num - 1];

    if (nuevoCombo.contains("Freddy"))      { p.descripcion = "Combo Estrella de Freddy"; p.precio = 9.99; }
    else if (nuevoCombo.contains("Chica"))  { p.descripcion = "Combo Tropical de Chica"; p.precio = 8.50; }
    else if (nuevoCombo.contains("Bonnie")) { p.descripcion = "Combo Verde de Bonnie"; p.precio = 10.25; }
    else if (nuevoCombo.contains("Foxy"))   { p.descripcion = "Combo Explosivo de Foxy"; p.precio = 11.75; }

    actualizarTabla();
    QMessageBox::information(this, "Modificado", "Producto modificado correctamente.");
}

void MainWindow::on_btnEliminar_clicked() {
    if (pedidos.empty()) {
        QMessageBox::warning(this, "Error", "No hay productos para eliminar.");
        return;
    }

    bool ok;
    int num = QInputDialog::getInt(this, "Eliminar Pedido", "Número del pedido a eliminar:", 1, 1, static_cast<int>(pedidos.size()), 1, &ok);
    if (!ok) return;

    pedidos.erase(pedidos.begin() + num - 1);
    actualizarTabla();
    QMessageBox::information(this, "Eliminado", "Producto eliminado correctamente.");
}

void MainWindow::on_btnFacturacion_clicked() {
    if (pedidos.empty()) {
        QMessageBox::warning(this, "Advertencia", "No hay productos para facturar.");
        return;
    }

    QString nombre = ui->editNombre->text();
    QString cedula = ui->editCedula->text();
    QString direccion = ui->editDireccion->text();

    if (nombre.isEmpty() || cedula.isEmpty() || direccion.isEmpty()) {
        QMessageBox::warning(this, "Campos incompletos", "Por favor, completa todos los datos del cliente.");
        return;
    }

    QMessageBox::StandardButton entrega = QMessageBox::question(
        this,
        "Tipo de entrega",
        "¿Desea entrega a domicilio por $1.50?\n(Si elige 'No', recogerá en el restaurante)",
        QMessageBox::Yes | QMessageBox::No
        );

    QMessageBox::StandardButton pago = QMessageBox::question(
        this,
        "Método de pago",
        "¿Pagará con tarjeta? (15% recargo)\n(Si elige 'No', pagará en efectivo)",
        QMessageBox::Yes | QMessageBox::No
        );

    double total = 0;
    QString facturaTexto;
    facturaTexto += "==================== FACTURA ====================\n";
    facturaTexto += "Nombre: " + nombre + "\n";
    facturaTexto += "Cédula: " + cedula + "\n";
    facturaTexto += "Dirección: " + direccion + "\n";
    facturaTexto += "------------ PRODUCTOS SOLICITADOS -------------\n";

    for (const Pedido &p : pedidos){
        facturaTexto += "Producto" + QString::number(p.numero)+": "+ p.descripcion + " -$"+QString::number(p.precio)+"\n";
        total += p.precio;
    }

    if (entrega == QMessageBox::Yes) {
        facturaTexto += "Recargo por domicilio: $1.50\n";
        total += 1.50;
    } else {
        facturaTexto += "Entrega: Recoge en el restaurante (sin recargo)\n";
    }

    if (pago == QMessageBox::Yes) {
        double recargo = round(total * 0.15 * 100.0) / 100.0;
        facturaTexto += "Recargo por tarjeta: $" + QString::number(recargo) + "\n";
        total += recargo;
    } else {
        facturaTexto += "Método de pago: Efectivo (sin recargo)\n";
    }

    facturaTexto += "Total a pagar: $" + QString::number(round(total * 100.0) / 100.0) + "\n";
    facturaTexto += "\nGracias por preferir FREDDY'S FAZBEAR!\n";
    facturaTexto += "=================================================\n";

    QFile archivo("C:/Users/Elizabeth/Desktop/PROGRAMACION/" + cedula + ".txt");
    if (archivo.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&archivo);
        out << facturaTexto;
        archivo.close();
    }

    QMessageBox::information(this, "Factura", "Factura generada exitosamente.");

    ui->editNombre->clear();
    ui->editCedula->clear();
    ui->editDireccion->clear();
    pedidos.clear();
    actualizarTabla();
}
void MainWindow::on_btnBuscarfactura_clicked()
{
    QString cedulaBuscar = QInputDialog::getText(this, "Buscar Factura", "Ingresa la cédula:");
    if (cedulaBuscar.isEmpty()) return;

    QFile archivo("C:/Users/Elizabeth/Desktop/PROGRAMACION/" + cedulaBuscar + ".txt");
    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "No se encontró una factura con esa cédula.");
        return;
    }

    QTextStream in(&archivo);
    QString contenido = in.readAll();
    archivo.close();

    QMessageBox::information(this, "Factura encontrada", contenido);
}

//void MainWindow::on_editNombre_textChanged(const QString &arg1){}
//void MainWindow::on_editCedula_textChanged(const QString &arg1){}
//void MainWindow::on_editDireccion_textChanged(const QString &arg1){}
