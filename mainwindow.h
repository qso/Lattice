#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    

private:
    void connection();
    bool isModified();
    void setModified(bool n);

    bool bModified;
    QStringList recentFiles;
    Ui::MainWindow *ui;

private slots:
    void newFile();
    void openFile();
    bool save();
    bool saveAs();
    void exit();
    void openRecentFile();
    void cut();
    void copy();
    void paste();
    void deleteCell();
    void setCellFont();
    void setCellBackGround();
    void sort();
    void find();
    void replace();
    void updateStatusBar();
    void updateCell();

};

#endif // MAINWINDOW_H
